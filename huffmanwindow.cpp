#include "huffmanwindow.h"
#include "ui_huffmanwindow.h"

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

}

// --------------- Slots

void huffmanwindow::loadFile(){

}

void huffmanwindow::compressWord(){
    QString word = ui->lineEdit->text();
    compress(&word);
}
