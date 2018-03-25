#include "desempenowindow.h"
#include "ui_desempenowindow.h"

DesempenoWindow::DesempenoWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DesempenoWindow)
{
    ui->setupUi(this);
    empleados = new Arbol<Empleado>();
}

DesempenoWindow::~DesempenoWindow()
{
    delete ui;
}

void DesempenoWindow::on_pushButton_5_clicked()
{
  QStandardItemModel* model = empleados->genModel();

  if (model != 0) {
    ui->treeView->setModel(model);
  }

  ui->jefeComboBox->setModel(empleados->getLeafList().toItemModel());
}

void DesempenoWindow::on_pushButton_2_clicked()
{
    ui->nombreField->setText("");
    ui->puestoField->setText("");

    ui->jefeComboBox->setModel(empleados->getLeafList().toItemModel());
}

void DesempenoWindow::on_pushButton_clicked()
{
empleados->insert(Empleado(ui->nombreField->text().toUtf8().constData(), ui->puestoField->text().toUtf8().constData()));
}
