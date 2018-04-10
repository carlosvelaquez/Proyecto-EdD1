#include "floydwindow.h"
#include "ui_floydwindow.h"
#include <QFile>
#include <QString>
#include "graph.h"
#include "graphview.h"
#include "QFileDialog"
#include <QMessageBox>

FloydWindow::FloydWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FloydWindow)
{
    ui->setupUi(this);
}

FloydWindow::~FloydWindow()
{
    delete ui;
}

void FloydWindow::on_pushButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Cargar Archivo de Grafo"), "", tr("Archivos de Grafo con Costos (*.wsota)"));

    if (fileName.isEmpty()) {
      return;
    }else{
      ifstream file;
      file.open(fileName.toUtf8().constData());

      if (!file) {
        QMessageBox::information(this, tr("Error cargando grafo"), tr("No se pudo cargar el archivo."));
        return;
      }else{
        graph = new Graph<string>(file);
        graph->color();
        file.close();
      }
    }
    fillTable();

}

void FloydWindow::fillTable(){
    int** adyacencia = graph->MinimalCost_Floyd();

    ui->tableWidget->setColumnCount(graph->getVertices()->size);
    ui->tableWidget->setRowCount(graph->getVertices()->size);


    for(int i=0; i<graph->getVertices()->size; i++){
        ui->tableWidget->setColumnWidth(i,ui->tableWidget->geometry().width()/graph->getVertices()->size-5);
        ui->tableWidget->setRowHeight(i,ui->tableWidget->geometry().height()/graph->getVertices()->size-5);
    }

    QStringList Lista;

    for (int i = 1; i <= graph->getVertices()->size; i++) {
      Lista.append(QString(graph->getVertices()->get(i)->getDisplayName().c_str()));
    }
    
    ui->tableWidget->setHorizontalHeaderLabels(Lista);
    ui->tableWidget->setVerticalHeaderLabels(Lista);
    for(int i=0; i<graph->getVertices()->size; i++){
        for(int j=0; j<graph->getVertices()->size; j++){
            ui->tableWidget->setItem(i,j,new QTableWidgetItem(adyacencia[i][j]));
            ui->tableWidget->item(i,j)->setText(QString::number(adyacencia[i][j]));
        }
    }
}
