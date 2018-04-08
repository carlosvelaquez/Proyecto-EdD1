#include "mstwindow.h"
#include "ui_mstwindow.h"

MSTWindow::MSTWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MSTWindow)
{
    ui->setupUi(this);
    graph = new Graph<string>(true);
    graphView = new GraphView<string>(graph, this);
    graphView->setGeometry(10, 70, 501, 351);
}

void MSTWindow::refreshLayout(){
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

void MSTWindow::on_botonNuevoGrafo_clicked()
{
    graph = new Graph<string>();
    graphView->setGraph(graph);
    refreshLayout();
}

void MSTWindow::on_botonCrearVertice_clicked(){
  Vertex<string>* nVertex = new Vertex<string>("#1565C0");
  nVertex->setDisplayName(ui->leNombreVertice->text().toUtf8().constData());
  graph->addVertex(nVertex);

  ui->leNombreVertice->setText("");
  refreshLayout();
}

void MSTWindow::on_botonConectarVertices_clicked()
{
  QVariant v1 = ui->cbVertice1->itemData(ui->cbVertice1->currentIndex());
  QVariant v2 = ui->cbVertice2->itemData(ui->cbVertice2->currentIndex());

  Vertex<string>* vertex1 = v1.value<Vertex<string>*>();
  Vertex<string>* vertex2 = v2.value<Vertex<string>*>();

  graph->addEdge(vertex1, vertex2, ui->sbCosto->value());
  graphView->refresh();
}


MSTWindow::~MSTWindow()
{
    delete ui;
}

void MSTWindow::on_pbEncontrarMST_clicked()
{
  if (graph != 0) {
    mst = graph->genMST();
    graphView->setGraph(mst);
    graphView->refresh();
    ui->lbVista->setText("MST");
  }
}

void MSTWindow::on_pbRevertir_clicked()
{
  if (graph != 0) {
    graphView->setGraph(graph);
    graphView->refresh();
    ui->lbVista->setText("Grafo Original");
  }
}
