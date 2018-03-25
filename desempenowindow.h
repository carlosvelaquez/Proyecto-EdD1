#ifndef DESEMPENOWINDOW_H
#define DESEMPENOWINDOW_H

#include <QWidget>
#include <QStandardItemModel>
#include <QStandardItem>
#include "arbol.h"
#include "empleado.h"
#include "list.h"

namespace Ui {
class DesempenoWindow;
}

class DesempenoWindow : public QWidget
{
    Q_OBJECT

public:
    explicit DesempenoWindow(QWidget *parent = 0);
    ~DesempenoWindow();

private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::DesempenoWindow *ui;
    Arbol<Empleado>* empleados;
};

#endif // DESEMPENOWINDOW_H
