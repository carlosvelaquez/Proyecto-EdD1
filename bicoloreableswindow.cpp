#include "bicoloreableswindow.h"
#include "ui_bicoloreableswindow.h"

BicoloreablesWindow::BicoloreablesWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BicoloreablesWindow)
{
    ui->setupUi(this);
}

BicoloreablesWindow::~BicoloreablesWindow()
{
    delete ui;
}

void BicoloreablesWindow::on_pushButton_pressed()
{
    moving = true;
}

void BicoloreablesWindow::on_pushButton_released()
{
    ui->pushButton->move(QCursor::pos());
}

void BicoloreablesWindow::on_pushButton_clicked()
{
    //hola
}
