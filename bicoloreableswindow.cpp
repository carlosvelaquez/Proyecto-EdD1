#include "bicoloreableswindow.h"
#include "ui_bicoloreableswindow.h"
#include "dragbutton.h"

BicoloreablesWindow::BicoloreablesWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BicoloreablesWindow)
{
    ui->setupUi(this);
    ui->grafoFrame->setLayout(layout);
}

void BicoloreablesWindow::on_botonCrearVertice_clicked(){
  Vertex<string>* nVertex = new Vertex<string>("white");
  nVertex->setDisplayName(ui->leNombreVertice->text().toUtf8().constData());
  graph->addVertex(nVertex);

  ui->leNombreVertice->setText("");
  refreshLayout();
}

void BicoloreablesWindow::refreshLayout(){
  List<Vertex<T>*>* vertices = graph->getVertices();

  for (int i = 1; i <= vertices->size; i++) {
    DragButton* db = new DragButton(vertices->get(i));
    layout->addWidget(db);
    db->move(50,50);
    db->show();
  }
}


BicoloreablesWindow::~BicoloreablesWindow()
{
    delete ui;
}
