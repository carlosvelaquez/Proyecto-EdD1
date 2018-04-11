#include "dijkstrawindow.h"
#include "ui_dijkstrawindow.h"
#include "QMessageBox"
#include "QFile"
#include "graph.h"
#include <QFileDialog>
#include <QVariant>
#include <iostream>

dijkstrawindow::dijkstrawindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dijkstrawindow)
{
    ui->setupUi(this);
}

dijkstrawindow::~dijkstrawindow()
{
    delete ui;
}

void dijkstrawindow::on_pushButton_clicked()
{
    graph=0;
    origen = 0;

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
    fillComboBox();

}

void dijkstrawindow::fillComboBox(){
  ui->comboBox->clear();

  if (graph != 0) {
    List<Vertex<string>*>* vertices = graph->getVertices();

    for (int i = 1; i <= vertices->size; i++) {
      QVariant cbData;
      Vertex<string>* current = vertices->get(i);

      cbData.setValue(current);
      ui->comboBox->addItem(current->getDisplayName().c_str(), cbData);
    }
  }
}

void dijkstrawindow::on_pushButton_Elegir_clicked()
{
    QVariant variant = ui->comboBox->itemData(ui->comboBox->currentIndex());
    Vertex<string> vertex = variant.value<Vertex<string>*>();
    for(int i=1; i<=graph->getVertices()->size; i++){
        if(graph->getVertices()->get(i)->getDisplayName()==vertex.getDisplayName()){
            graph->MinimalCost_Dijkstra(graph->getVertices()->get(i));
            fillText();
            return;
        }
    }
}

void dijkstrawindow::fillText(){
    /*std::string str = "Hello world";
     *QString qstr = QString::fromStdString(str);
     */
    QString text1;
    QString text2;
<<<<<<< HEAD
//    text+="Vertice de origen: "+QString::fromStdString(graph->getSptSet()->get(1)->getDisplayName());
=======
<<<<<<< HEAD
    //text+="Vertice de origen: "+QString::fromStdString(graph->getSptSet()->get(1)->getDisplayName());
=======
//    text+="Vertice de origen: "+QString::fromStdString(graph->getSptSet()->get(1)->getDisplayName());
>>>>>>> c7ebd3788abaae32b9705f488afb90bf94944e58
>>>>>>> ff4d2d603f5252e7d2ec4b033bede961be9efa9f
    for(int i=2; i<=graph->getSptSet()->size; i++){

    }
}
