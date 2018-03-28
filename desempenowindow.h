#ifndef DESEMPENOWINDOW_H
#define DESEMPENOWINDOW_H

#include <QWidget>
#include <QStandardItemModel>
#include <QStandardItem>
#include "tree.h"
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
    void refresh();
    ~DesempenoWindow();

private slots:
    void on_botonEnviar_clicked();

    void on_botonBorrar_clicked();

    void on_botonCrear_clicked();

    void on_botonRefrescar_clicked();

private:
    Ui::DesempenoWindow *ui;
    Tree<Empleado>* empleados;
};

#endif // DESEMPENOWINDOW_H
