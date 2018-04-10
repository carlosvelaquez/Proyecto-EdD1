#ifndef FLOYDWINDOW_H
#define FLOYDWINDOW_H

#include <QWidget>
#include "graph.h"

namespace Ui {
class FloydWindow;
}

class FloydWindow : public QWidget
{
    Q_OBJECT

public:
    explicit FloydWindow(QWidget *parent = 0);

    void fillTable();
    void showGraph();

    ~FloydWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::FloydWindow *ui;
    Graph<string>* graph = 0;
};

#endif // FLOYDWINDOW_H
