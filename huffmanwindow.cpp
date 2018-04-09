#include "huffmanwindow.h"
#include "ui_huffmanwindow.h"
#include "bitreenode.h"
#include <QDebug>
#include <QFile>
#include <QFileDialog>
#include "list.h"

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


void huffmanwindow::compress(QString word){
    if(word == "")
        return;

    ui->lineEdit->setText("");
    Queue<bitreenode<treedata>*>* queue = fillList(&word);
    sort(queue);
    bitreenode<treedata>* root = createTree(queue);
    decode("",root);
    filltext();
    qDebug()<<textoGenerado;
    delete root;
    delete queue;
}


/* Funcion que llena una Estructura de Datos "Queue" de caracteres
 * y frecuencias que contiene la cadena.
*/
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


/* Slot que obtiene un archivo de texto lee el archivo de texto y obtiene
 * las cadenas de caracteres contenidas para su codificación.
*/
void huffmanwindow::loadFile(){
    textoObtenido = "";
    textoGenerado = "";
    codigos = new List<treedata>();
    QString fileName =QFileDialog::getOpenFileName(this, tr("Open File"),"/path/to/file/",tr("Archivos de texto (*.txt)"));
    QFile* nfile = new QFile(fileName);
    if (nfile->open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream stream(nfile);
        while (!stream.atEnd()){
            textoObtenido+= stream.readLine();
        }
    }
    nfile->close();
    delete nfile;
    compress(textoObtenido);
}

/* Slot que obtiene el texto escrito desde un LineEdit
*/
void huffmanwindow::compressWord(){
    textoObtenido = "";
    textoGenerado = "";
    codigos = new List<treedata>();
    textoObtenido = ui->lineEdit->text();
    compress(textoObtenido);
}

/* Funcion que crea el arbol binario desde una Estructura de Datos Queue ordenada
 * de forma desendiente.
*/
bitreenode<treedata>* huffmanwindow::createTree(Queue<bitreenode<treedata>*>* queue){
    if(queue->size==1){
        return queue->dequeue();
    }else{
        bitreenode<treedata>* nodeIzq = queue->dequeue();
        bitreenode<treedata>* nodeDer = queue->dequeue();
        nodeIzq->getData()->setType(0);
        nodeDer->getData()->setType(1);
        treedata temp(nodeIzq->getData()->getFrecuency()+nodeDer->getData()->getFrecuency());
        queue->queue(new bitreenode<treedata>(temp,nodeIzq,nodeDer));
        return createTree(queue);
    }
}

/* Funcion que ordena una Estructura de Datos Queue tipada con
 * nodos de arbol binario.
*/
void huffmanwindow::sort(Queue<bitreenode<treedata>*>* nQueue){
   vector<bitreenode<treedata>*> list = nQueue->toVector();
   nQueue->clear();
   bitreenode<treedata>* temp;
   for(int i=1; i<list.size(); i++){
       for(int j=0; j<list.size()-1; j++){
           if(list[j]->getData()->getFrecuency()>list[j+1]->getData()->getFrecuency()){
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
           }
       }
   }
   for(int i=0; i<list.size(); i++){
    nQueue->queue(list[i]);
   }
}

/* Funcion que obtiene el codigo de un arbol binario
*/
void huffmanwindow::decode(QString Code, bitreenode<treedata>* currentTreeNode){
    if(!currentTreeNode->hasChildren()){
        Code+=QString::number(currentTreeNode->getData()->getType());
       // codigos->insert(new treedata(currentTreeNode->getData()->getChar(),code));
    }else{
        if(currentTreeNode->getData()->getType()!=-1){
            Code+=QString::number(currentTreeNode->getData()->getType());
        }
        decode(Code,currentTreeNode->getLeftChild());
        if(currentTreeNode->getData()->getType()!=-1){
            Code+=QString::number(currentTreeNode->getData()->getType());
        }
        decode(Code,currentTreeNode->getRightChild());
    }
}

void huffmanwindow::filltext(){
    for(int i=0; i<textoObtenido.size(); i++){
        for(int j=1; j<=codigos->size; i++){
            if(codigos->get(j).getChar() == textoObtenido[i]){
                textoGenerado+=codigos->get(j).getCode();
            }
        }
    }
}

