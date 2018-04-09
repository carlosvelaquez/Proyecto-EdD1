#ifndef BICOLOREABLESWINDOW_H
#define BICOLOREABLESWINDOW_H

#include <QWidget>
#include <QVariant>
#include <string>
#include "graphview.h"
#include "vertex.h"
#include "dragbutton.h"

using namespace std;
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
    void loadFromFile();
    void saveToFile();
    ~BicoloreablesWindow();

private slots:
  void on_botonCrearVertice_clicked();

  void on_botonNuevoGrafo_clicked();

  void on_botonConectarVertices_clicked();

  void on_botonCorrer_clicked();

private:
    Ui::BicoloreablesWindow *ui;
    Graph<string>* graph;
    GraphView<string>* graphView;
};

#endif // BICOLOREABLESWINDOW_H
