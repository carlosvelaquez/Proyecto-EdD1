#include "mstwindow.h"
#include "ui_mstwindow.h"

MSTWindow::MSTWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MSTWindow)
{
    ui->setupUi(this);
    graph = new Graph<string>(true);
    graph->defaultColor = "#42A5F5";
    graphView = new GraphView<string>(graph, this);
    graphView->setGeometry(10, 70, 501, 351);
    ui->lbError->raise();
    ui->lbError->hide();
}

void MSTWindow::refreshLayout(){
  ui->cbVertice1->clear();
  ui->cbVertice2->clear();

  if (graphView->getGraph() != 0) {
    List<Vertex<string>*>* vertices = graphView->getGraph()->getVertices();

    for (int i = 1; i <= vertices->size; i++) {
      QVariant cbData;
      Vertex<string>* current = vertices->get(i);

      cbData.setValue(current);
      ui->cbVertice1->addItem(current->getDisplayName().c_str(), cbData);
      ui->cbVertice2->addItem(current->getDisplayName().c_str(), cbData);
    }
  }

  graphView->refresh();
}

void MSTWindow::on_botonNuevoGrafo_clicked()
{
    graph = new Graph<string>(true);
    graph->defaultColor = "#42A5F5";
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
  bool error = false;

  if (graph != 0) {
    try{
      mst = graph->genMST();
    }catch(...){
      error = true;
    }

    if (graph->size() < 1) {
      error = true;
    }

    if (mst == 0) {
      error = true;
    }else{
      if (mst->size() != graph->size()) {
        error = true;
      }
    }

    ui->lbVista->setText("AEM");

    if (!error) {
      ui->lbError->hide();
      graphView->setGraph(mst);
      graphView->refresh();
    }else{
      graphView->setGraph(0);
      ui->lbError->show();
    }
  }
}

void MSTWindow::on_pbRevertir_clicked()
{
  ui->lbError->hide();
  if (graph != 0) {
    graphView->setGraph(graph);
    graphView->refresh();
    ui->lbVista->setText("Grafo Original");
  }
}

void MSTWindow::on_botonCargarGrafo_clicked()
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
      graphView->setGraph(graph);
      refreshLayout();
      file.close();
    }
  }
}

void MSTWindow::on_botonGuardarGrafo_clicked()
{
  QString fileName = QFileDialog::getSaveFileName(this, tr("Guardar Archivo de Grafo"), "", tr("Archivos de Grafo con Costos (*.wsota)"));

  if (fileName.isEmpty()) {
    return;
  }else{
    ofstream file;
    file.open(fileName.toUtf8().constData());

    if (!file) {
      QMessageBox::information(this, tr("Error guardando grafo"), tr("No se pudo guardar el archivo."));
      return;
    }else{
      file << graph->toTextFile().c_str();
      file.close();
    }
  }
}
