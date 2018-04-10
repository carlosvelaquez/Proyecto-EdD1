#ifndef DIJKSTRAWINDOW_H
#define DIJKSTRAWINDOW_H

#include <QWidget>
#include "graph.h"
#include "vertex.h"

namespace Ui {
class dijkstrawindow;
}

class dijkstrawindow : public QWidget
{
    Q_OBJECT

public:
    explicit dijkstrawindow(QWidget *parent = 0);
    ~dijkstrawindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_Elegir_clicked();
    void fillComboBox();
private:
    Ui::dijkstrawindow *ui;
    Graph<string>* graph = 0;
    Vertex<string>* origen = 0;
};

#endif // DIJKSTRAWINDOW_H
