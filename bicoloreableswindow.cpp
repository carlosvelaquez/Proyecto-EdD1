#include "bicoloreableswindow.h"
#include "ui_bicoloreableswindow.h"

BicoloreablesWindow::BicoloreablesWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BicoloreablesWindow)
{
    ui->setupUi(this);
    graphView = new GraphView<string>(graph, this);
    graphView->setGeometry(10, 70, 501, 351);
}

void BicoloreablesWindow::on_botonCrearVertice_clicked(){
  Vertex<string>* nVertex = new Vertex<string>("#7512EA");
  nVertex->setDisplayName(ui->leNombreVertice->text().toUtf8().constData());
  graph->addVertex(nVertex);

  ui->leNombreVertice->setText("");
  refreshLayout();
}

void BicoloreablesWindow::refreshLayout(){
  List<Vertex<string>*>* vertices = graphView->getGraph()->getVertices();

  graphView->refresh();
  ui->cbVertice1->clear();
  ui->cbVertice2->clear();

  for (int i = 1; i <= vertices->size; i++) {
    QVariant cbData;
    Vertex<string>* current = vertices->get(i);

    cbData.setValue(current);
    ui->cbVertice1->addItem(current->getDisplayName().c_str(), cbData);
    ui->cbVertice2->addItem(current->getDisplayName().c_str(), cbData);
  }
}


BicoloreablesWindow::~BicoloreablesWindow()
{
    delete ui;
}

void BicoloreablesWindow::on_botonNuevoGrafo_clicked()
{
    graph = new Graph<string>();
    graphView->setGraph(graph);
    refreshLayout();
}

void BicoloreablesWindow::on_botonConectarVertices_clicked()
{
  QVariant v1 = ui->cbVertice1->itemData(ui->cbVertice1->currentIndex());
  QVariant v2 = ui->cbVertice2->itemData(ui->cbVertice2->currentIndex());

  Vertex<string>* vertex1 = v1.value<Vertex<string>*>();
  Vertex<string>* vertex2 = v2.value<Vertex<string>*>();

  graph->addEdge(vertex1, vertex2);
  graphView->refresh();
}
