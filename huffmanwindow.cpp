#include "huffmanwindow.h"
#include "ui_huffmanwindow.h"
#include "bitreenode.h"

huffmanwindow::huffmanwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::huffmanwindow)
{
    ui->setupUi(this);
}

huffmanwindow::~huffmanwindow()
{
    delete ui;
}

void huffmanwindow::compress(QString* word){
    if(*word == "")
        return;

    ui->lineEdit->setText("");

}



// --------------- Slots
void huffmanwindow::loadFile(){

}

void huffmanwindow::compressWord(){
    QString word = ui->lineEdit->text();
    compress(&word);
}
