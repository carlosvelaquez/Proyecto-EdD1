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
  if (first) {
    ui->textEditHist->setText("");
    first = false;
  }

  string output;
  output += "\nExpresión Dada: ";
  output += ui->lineEditExp->text().toUtf8().constData();
  output += '\n';

  string expString = ui->lineEditExp->text().toUtf8().constData();

  Expression expr = Expression(expString);

  try{
    if (expr.isValid()) {
      double result = expr.operate();
      if (isinf(result) || isnan(result)) {
        output += "ERROR | Error matemático, por favor revise la expresión ingresada.";
      }else{
        string log = expr.retrieveLog();

        output += "\nProcedimiento:\n" + log;
        output += "\nResultado: ";
        string res = to_string(result);

        int i = res.length() - 1;

        while (res[i] == '0') {
          res = res.substr(0, i);
          i = res.length() - 1;
        }

        if (res[i] == '.') {
          res = res.substr(0, i);
        }

        output += res;
      }
    }else{
      output += "ERROR | Expresión no válida, por favor revise la expresión ingresada." ;
    }
  }catch(...){
    output += "ERROR | Por favor revise la expresión ingresada." ;
  }

  output += "\n\n- - - - - - - - - -\n";
  string nText = ui->textEditHist->toPlainText().toUtf8().constData();
  nText += output;
  ui->textEditHist->setText(nText.c_str());
  QScrollBar* sc = ui->textEditHist->verticalScrollBar();
  sc->setValue(sc->maximum());
}
