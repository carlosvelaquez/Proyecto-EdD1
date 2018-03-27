#include "desempenowindow.h"
#include "ui_desempenowindow.h"

DesempenoWindow::DesempenoWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DesempenoWindow)
{
    ui->setupUi(this);
    empleados = new Tree<Empleado>("Empleados");
    refresh();
}

DesempenoWindow::~DesempenoWindow()
{
    delete ui;
}

void DesempenoWindow::on_pushButton_5_clicked()
{
  refresh();
}

void DesempenoWindow::on_pushButton_2_clicked()
{
    ui->nombreField->setText("");
    ui->puestoField->setText("");

    refresh();
}

void DesempenoWindow::refresh(){
  QStandardItemModel* model = empleados->toItemModel();

  if (model != 0) {
    ui->treeView->setModel(model);
  }

  List<TreeNode<Empleado>*>* empleadosList = empleados->getNodeList();
  QStandardItemModel* cbModel = new QStandardItemModel();

  if (empleadosList != 0) {
    for (int i = 0; i < empleadosList->size; i++) {
      cbModel->appendRow(new QStandardItem(string(empleadosList->get(i)->getData()).c_str()));
    }
  }else{
    cbModel->appendRow(new QStandardItem("No tiene superior"));
  }

  ui->jefeComboBox->setModel(cbModel);
}

void DesempenoWindow::on_pushButton_clicked()
{
//empleados->insert(Empleado(ui->nombreField->text().toUtf8().constData(), ui->puestoField->text().toUtf8().constData()));
}
