#include "dijkstrawindow.h"
#include "ui_dijkstrawindow.h"
#include "QMessageBox"
#include "QFile"
#include "graph.h"
#include <QFileDialog>
#include <QVariant>

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
      /* for(int i=1; i<=graph->getVertices()->size; i++){
        QVariant cbData;
        Vertex<string>* current;
        current = graph->getVertices()->get(i);
        cbData.setValue(current);
        ui->comboBox->addItem(current->getDisplayName().c_str(), cbData);
    }*/
}

void dijkstrawindow::on_pushButton_Elegir_clicked()
{
    /*QVariant v1 = ui->comboBox->itemData(ui->comboBox->currentText());
    origen = v1.value<Vertex<string>*>();

    if(origen==0){
     QMessageBox::information(this,tr("Error"),tr("No se puede realizar la operacion"));
    }else{
        graph->MinimalCost_Dijkstra(origen);
    }*/
}
