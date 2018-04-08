#include "huffmanwindow.h"
#include "ui_huffmanwindow.h"
#include "bitreenode.h"
#include <QDebug>
#include <QFile>
#include <QFileDialog>

huffmanwindow::huffmanwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::huffmanwindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_compress, SIGNAL(clicked()),this,SLOT(compressWord()));
    connect(ui->pushbutton_load, SIGNAL(clicked()),this,SLOT(loadFile()));

}

huffmanwindow::~huffmanwindow()
{
    delete ui;
}

void huffmanwindow::compress(QString* word){
    if(*word == "")
        return;

    ui->lineEdit->setText("");
    Queue<bitreenode<treedata>*>* queue = fillList(word);
    queue->sort();
    bitreenode<treedata>* root = createTree(queue);
    delete root;
    delete queue;
}

Queue<bitreenode<treedata>*>* huffmanwindow::fillList(QString* word){
    int cont = 0;
    QChar Char;
    QString temp = *word;
    Queue<bitreenode<treedata>*>* list = new Queue<bitreenode<treedata>*>();
    while(temp.size()>0){
        Char = temp[0];
        for(int i=0; i<temp.size(); i++){
            if(Char==temp[i])
                cont++;
        }
        temp.remove(Char, Qt::CaseInsensitive);
        treedata temp(Char,cont);
        bitreenode<treedata>* node = new bitreenode<treedata>(temp);
        list->queue(node);
        cont = 0;
    }
    return list;
}


// --------------- Slots
void huffmanwindow::loadFile(){
    QString fileName =QFileDialog::getOpenFileName(this, tr("Open File"),"/path/to/file/",tr("Archivos de texto (*.txt)"));
    QFile* nfile = new QFile(fileName);
    QString text;
    if (nfile->open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream stream(nfile);
        while (!stream.atEnd()){
            text+= stream.readLine();
        }
    }
    nfile->close();
    delete nfile;
    compress(&text);
}

void huffmanwindow::compressWord(){
    QString word = ui->lineEdit->text();
    compress(&word);
}

// --------------- Otros
bitreenode<treedata>* huffmanwindow::createTree(Queue<bitreenode<treedata>*>* queue){
    if(queue->size==1){
        return queue->dequeue();
    }else{
        bitreenode<treedata>* nodeIzq = queue->dequeue();
        bitreenode<treedata>* nodeDer = queue->dequeue();
        treedata temp(nodeIzq->getData()->getFrecuency()+nodeDer->getData()->getFrecuency());
        queue->queue(new bitreenode<treedata>(temp,nodeIzq,nodeDer));
        return createTree(queue);
    }
}
