#include "expresioneswindow.h"
#include "ui_expresioneswindow.h"
#include "expression.h"

ExpresionesWindow::ExpresionesWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ExpresionesWindow)
{
    ui->setupUi(this);
}

ExpresionesWindow::~ExpresionesWindow()
{
    delete ui;
}

void ExpresionesWindow::on_botonLimpiar_clicked()
{
    ui->lineEditExp->setText("");
    ui->textEditHist->setText("");
}

void ExpresionesWindow::on_botonResolver_clicked()
{
  string output;
  output += "\n- - - - - - - - - -\nExpresión Dada: ";
  output += ui->lineEditExp->text().toUtf8().constData();
  output += '\n';

  string expString = ui->lineEditExp->text().toUtf8().constData();

  Expression expr = Expression(expString);

  if (expr.isValid()) {
    output += "Resultado: ";
    output += to_string(expr.operate());
  }else{
    output += "ERROR | Expresión no válida" ;
  }

  output += "\n- - - - - - - - - -\n";
  string nText = ui->textEditHist->toPlainText().toUtf8().constData();
  nText += output;
  ui->textEditHist->setText(nText.c_str());
  QScrollBar* sc = ui->textEditHist->verticalScrollBar();
  sc->setValue(sc->maximum());
}
