#include "mainwindow.h"
#include "expresioneswindow.h"
#include "ui_mainwindow.h"
#include "laberintowindow.h"
#include "huffmanwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    DesempenoWindow* w = new DesempenoWindow();
    w->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    ExpresionesWindow* w = new ExpresionesWindow();
    w->show();
}

void MainWindow::on_pushButton_5_clicked()
{
    BicoloreablesWindow* w = new BicoloreablesWindow();
    w->show();
}

void MainWindow::on_pushButton_clicked()
{
    laberintowindow* lb = new laberintowindow();
    lb->show();
}

void MainWindow::on_pushButton_4_clicked()
{
    huffmanwindow* hw = new huffmanwindow();
    hw->show();
}
