#include "bicoloreableswindow.h"
#include "ui_bicoloreableswindow.h"

BicoloreablesWindow::BicoloreablesWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BicoloreablesWindow)
{
    ui->setupUi(this);
    graph = new Graph<string>();
    graph->defaultColor = "#7E57C2";
    graphView = new GraphView<string>(graph, this);
    graphView->setGeometry(10, 70, 501, 351);
}

void BicoloreablesWindow::on_botonCrearVertice_clicked(){
  Vertex<string>* nVertex = new Vertex<string>("#7512EA");
  nVertex->setDisplayName(ui->leNombreVertice->text().toUtf8().constData());
  graph->addVertex(nVertex);

  ui->leNombreVertice->setText("");

  if (graph->isBicolored()) {
    graph->color();
  }

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
    graph->defaultColor = "#7E57C2";
    graphView->setGraph(graph);
    ui->resultadoLabel->setText("-");
    refreshLayout();
}

void BicoloreablesWindow::on_botonConectarVertices_clicked()
{
  if (graph->isBicolored()) {
    graph->color();
  }

  QVariant v1 = ui->cbVertice1->itemData(ui->cbVertice1->currentIndex());
  QVariant v2 = ui->cbVertice2->itemData(ui->cbVertice2->currentIndex());

  Vertex<string>* vertex1 = v1.value<Vertex<string>*>();
  Vertex<string>* vertex2 = v2.value<Vertex<string>*>();

  graph->addEdge(vertex1, vertex2);
  graphView->refresh();
}

void BicoloreablesWindow::on_botonCorrer_clicked()
{
    if (!graph->isBicolorable()) {
      ui->resultadoLabel->setText("NO es bicoloreable.");
    }else{
      ui->resultadoLabel->setText("SI es bicoloreable.");
    }

    graphView->refresh();
}

/* COMIENZA GUARDAR/LEER

void BicoloreablesWindow::saveToFile(){
  QString fileName = QFileDialog::getSaveFileName(this, tr("Guardar Archivo de Grafo"), "", tr("Archivos de Grafo (*.graph)"));

  if (fileName.isEmpty()) {
    return;
  }else{
    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly)) {
      QMessageBox::information(this, tr("Error guardando grafo"), tr("No se pudo guardar el archivo."));
      QMessageBox::information(this, tr("Error cargando grafo"), tr("No se pudo abrir el archivo."));
      return;
    }else{
      QDataStream out(&file);
      QVariant data;

      graph->color();

      for (int i = 1; i <= graph->getVertices()->size; i++) {
        vertices.insert(*graph->getVertices()->get(i));
      }

      data.setValue(vertices);
      out << data;
    }
  }
}

void BicoloreablesWindow::loadFromFile(){
  QString fileName = QFileDialog::getOpenFileName(this, tr("Cargar Archivo de Grafo"), "", tr("Archivos de Grafo (*.graph)"));

  if (fileName.isEmpty()) {
    return;
  }else{
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly)) {
      QMessageBox::information(this, tr("Error cargando grafo"), tr("No se pudo abrir el archivo."));
      return;
    }else{
      QDataStream in(&file);
      QVariant data;

      in >> data;

      Graph<string> loaded = data.value<Graph<string>>();
      graph = new Graph<string>();
      graph->copy(loaded);
      graphView->setGraph(graph);
    }
  }

  refreshLayout();
}


void BicoloreablesWindow::on_botonCargar_clicked()
{
    loadFromFile();
}

void BicoloreablesWindow::on_botonGuardarGrafo_clicked()
{
    saveToFile();
}

*/
