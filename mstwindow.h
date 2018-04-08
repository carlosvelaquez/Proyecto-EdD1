#ifndef MSTWINDOW_H
#define MSTWINDOW_H

#include <QWidget>
#include <QVariant>
#include <string>
#include "graphview.h"
#include "vertex.h"
#include "dragbutton.h"

using namespace std;

namespace Ui {
class MSTWindow;
}

class MSTWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MSTWindow(QWidget *parent = 0);
    void addDragButton(string);
    void refreshLayout();
    ~MSTWindow();

    private slots:
      void on_botonCrearVertice_clicked();

      void on_botonNuevoGrafo_clicked();

      void on_botonConectarVertices_clicked();

      void on_pbEncontrarMST_clicked();

      void on_pbRevertir_clicked();

private:
    Ui::MSTWindow *ui;
    Graph<string>* graph = 0;
    GraphView<string>* graphView = 0;
    Graph<string>* mst = 0;
};

#endif // MSTWINDOW_H
