#include "desempenowindow.h"
#include "ui_desempenowindow.h"

DesempenoWindow::DesempenoWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DesempenoWindow)
{
    ui->setupUi(this);
    empleados = new Tree<Empleado>("Estructura de la Compañía");
    empleados->setRootName("Empleados");
    refresh();
}

DesempenoWindow::~DesempenoWindow()
{
    delete ui;
}

void DesempenoWindow::on_botonRefrescar_clicked()
{
  empleados = new Tree<Empleado>("Estructura de la Compañía");
  empleados->setRootName("Empleados");
  refresh();
}

void DesempenoWindow::on_botonBorrar_clicked()
{
    ui->nombreField->setText("");
    ui->puestoField->setText("");

    refresh();
}

void DesempenoWindow::refresh(){
  ui->calComboBox->clear();
  List<TreeNode<Empleado>*>* hojasList = empleados->getLeafList();

  if (hojasList != 0) {
    if (hojasList->size == 0) {
      ui->calComboBox->addItem("No hay empleados");
    }else{
      for (int i = 1; i <= hojasList->size; i++) {
        string nombreString = hojasList->get(i)->getData().getNombre();
        ui->calComboBox->addItem(nombreString.c_str());

        TreeNode<Empleado>* tNode = hojasList->get(i);
        Empleado temp;
        float tCal;

        tNode = tNode->getParent();

        while (tNode != 0) {
          tCal = 0;

          for (int i = 1; i <= tNode->getChildren()->size; i++) {
            tCal += tNode->getChildren()->get(i)->getData().getCalificacion();
          }

          tCal /= tNode->getChildren()->size;
          temp = tNode->getData();
          temp.setCalificacion(tCal);
          tNode->setData(temp);
          tNode = tNode->getParent();
        }
      }
    }
  }else{
    ui->calComboBox->addItem("Error con lista de empleados");
  }
  
  QStandardItemModel* model = empleados->toItemModel();

  if (model != 0) {
    ui->treeView->setModel(model);
  }

  ui->treeView->expandAll();

  ui->jefeComboBox->clear();
  List<TreeNode<Empleado>*>* empleadosList = empleados->getNodeList();

  if (empleadosList != 0) {
    if (empleadosList->size == 0) {
      ui->jefeComboBox->addItem("Sin superior");
    }else{
      for (int i = 1; i <= empleadosList->size; i++) {
        string nombreString = empleadosList->get(i)->getData().getNombre();
        //Empleado temp = empleadosList->get(i)->getData();
        ui->jefeComboBox->addItem(nombreString.c_str());
      }
    }
  }else{
    ui->jefeComboBox->addItem("Error con lista de empleados");
  }
}

void DesempenoWindow::on_botonCrear_clicked()
{
  if (empleados->isEmpty()) {
    empleados->setRoot(Empleado(ui->nombreField->text().toUtf8().constData(), ui->puestoField->text().toUtf8().constData()));
  }else{
    Empleado nEmp(ui->nombreField->text().toUtf8().constData(), ui->puestoField->text().toUtf8().constData());
    TreeNode<Empleado>* tNode = empleados->find(Empleado(ui->jefeComboBox->currentText().toUtf8().constData(), "0"));

    if (tNode != 0) {
      tNode->addChild(nEmp);
    }
  }

  ui->nombreField->setText("");
  ui->puestoField->setText("");
  refresh();
}

void DesempenoWindow::on_botonEnviar_clicked()
{
//Enviar cal
TreeNode<Empleado>* tNode = empleados->find(Empleado(ui->calComboBox->currentText().toUtf8().constData(), "0"));
Empleado temp = tNode->getData();
temp.setCalificacion(ui->calSpinner->value());
tNode->setData(temp);
refresh();
}
