#ifndef DESEMPENOWINDOW_H
#define DESEMPENOWINDOW_H

#include <fstream>
#include <sstream>
#include <iostream>
#include <QWidget>
#include <QStandardItemModel>
#include <QFileDialog>
#include <QMessageBox>
#include <QStandardItem>
#include "tree.h"
#include "empleado.h"
#include "list.h"

using namespace std;

namespace Ui {
class DesempenoWindow;
}

class DesempenoWindow : public QWidget
{
    Q_OBJECT

public:
    explicit DesempenoWindow(QWidget *parent = 0);
    void refresh();
    void treeSearch(TreeNode<Empleado>*, string*);
    TreeNode<Empleado>* fileSearch(ifstream&);
    ~DesempenoWindow();

private slots:
    void on_botonEnviar_clicked();

    void on_botonBorrar_clicked();

    void on_botonCrear_clicked();

    void on_botonRefrescar_clicked();

    void on_botonGuardar_clicked();

    void on_botonCargar_clicked();

private:
    Ui::DesempenoWindow *ui;
    Tree<Empleado>* empleados;
};

#endif // DESEMPENOWINDOW_H
