#ifndef BICOLOREABLESWINDOW_H
#define BICOLOREABLESWINDOW_H

#include <QWidget>
#include <QVBoxLayout>
#include <QVariant>
#include <string>
#include "graphview.h"
#include "vertex.h"
#include "dragbutton.h"

using namespace std;
Q_DECLARE_METATYPE(Vertex<string>*)

namespace Ui {
class BicoloreablesWindow;
}

class BicoloreablesWindow : public QWidget
{
    Q_OBJECT

public:
    explicit BicoloreablesWindow(QWidget *parent = 0);
    void addDragButton(string);
    void refreshLayout();
    ~BicoloreablesWindow();

private slots:
  void on_botonCrearVertice_clicked();

  void on_botonNuevoGrafo_clicked();

  void on_botonConectarVertices_clicked();

private:
    Ui::BicoloreablesWindow *ui;
    bool moving;
    QVBoxLayout* layout = new QVBoxLayout();
    Graph<string>* graph = new Graph<string>();
    GraphView<string>* graphView = new GraphView<string>();
};

#endif // BICOLOREABLESWINDOW_H
