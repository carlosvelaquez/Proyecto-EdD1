/********************************************************************************
** Form generated from reading UI file 'desempenowindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESEMPENOWINDOW_H
#define UI_DESEMPENOWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DesempenoWindow
{
public:
    QLabel *label;
    QFrame *frame;
    QLineEdit *nombreField;
    QLineEdit *puestoField;
    QPushButton *botonCrear;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *botonBorrar;
    QComboBox *jefeComboBox;
    QLabel *label_5;
    QTreeView *treeView;
    QFrame *frame_2;
    QLabel *label_6;
    QComboBox *calComboBox;
    QDoubleSpinBox *calSpinner;
    QPushButton *botonEnviar;
    QPushButton *botonReporte;
    QFrame *line;
    QPushButton *botonRefrescar;

    void setupUi(QWidget *DesempenoWindow)
    {
        if (DesempenoWindow->objectName().isEmpty())
            DesempenoWindow->setObjectName(QStringLiteral("DesempenoWindow"));
        DesempenoWindow->resize(574, 390);
        label = new QLabel(DesempenoWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 371, 31));
        QFont font;
        font.setFamily(QStringLiteral("Montserrat"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        frame = new QFrame(DesempenoWindow);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 260, 551, 111));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Plain);
        nombreField = new QLineEdit(frame);
        nombreField->setObjectName(QStringLiteral("nombreField"));
        nombreField->setGeometry(QRect(10, 70, 111, 23));
        puestoField = new QLineEdit(frame);
        puestoField->setObjectName(QStringLiteral("puestoField"));
        puestoField->setGeometry(QRect(140, 70, 121, 23));
        botonCrear = new QPushButton(frame);
        botonCrear->setObjectName(QStringLiteral("botonCrear"));
        botonCrear->setGeometry(QRect(420, 50, 111, 41));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 181, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Montserrat"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 50, 59, 15));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(140, 50, 59, 15));
        botonBorrar = new QPushButton(frame);
        botonBorrar->setObjectName(QStringLiteral("botonBorrar"));
        botonBorrar->setGeometry(QRect(420, 20, 111, 21));
        jefeComboBox = new QComboBox(frame);
        jefeComboBox->setObjectName(QStringLiteral("jefeComboBox"));
        jefeComboBox->setGeometry(QRect(280, 70, 121, 23));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(280, 50, 81, 16));
        treeView = new QTreeView(DesempenoWindow);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setGeometry(QRect(15, 51, 321, 191));
        treeView->setAnimated(true);
        frame_2 = new QFrame(DesempenoWindow);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(349, 49, 211, 191));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_6 = new QLabel(frame_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 10, 201, 31));
        label_6->setFont(font1);
        calComboBox = new QComboBox(frame_2);
        calComboBox->setObjectName(QStringLiteral("calComboBox"));
        calComboBox->setGeometry(QRect(10, 50, 121, 23));
        calSpinner = new QDoubleSpinBox(frame_2);
        calSpinner->setObjectName(QStringLiteral("calSpinner"));
        calSpinner->setGeometry(QRect(150, 50, 51, 24));
        calSpinner->setMaximum(100);
        botonEnviar = new QPushButton(frame_2);
        botonEnviar->setObjectName(QStringLiteral("botonEnviar"));
        botonEnviar->setGeometry(QRect(10, 90, 191, 31));
        botonReporte = new QPushButton(frame_2);
        botonReporte->setObjectName(QStringLiteral("botonReporte"));
        botonReporte->setGeometry(QRect(10, 152, 191, 31));
        line = new QFrame(frame_2);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 130, 191, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        botonRefrescar = new QPushButton(DesempenoWindow);
        botonRefrescar->setObjectName(QStringLiteral("botonRefrescar"));
        botonRefrescar->setGeometry(QRect(459, 10, 101, 23));

        retranslateUi(DesempenoWindow);

        QMetaObject::connectSlotsByName(DesempenoWindow);
    } // setupUi

    void retranslateUi(QWidget *DesempenoWindow)
    {
        DesempenoWindow->setWindowTitle(QApplication::translate("DesempenoWindow", "Evaluaci\303\263n de Desempe\303\261o", nullptr));
        label->setText(QApplication::translate("DesempenoWindow", "Evaluaci\303\263n de Desempe\303\261o", nullptr));
        botonCrear->setText(QApplication::translate("DesempenoWindow", "Crear Empleado", nullptr));
        label_2->setText(QApplication::translate("DesempenoWindow", "A\303\261adir Empleado", nullptr));
        label_3->setText(QApplication::translate("DesempenoWindow", "Nombre", nullptr));
        label_4->setText(QApplication::translate("DesempenoWindow", "Puesto", nullptr));
        botonBorrar->setText(QApplication::translate("DesempenoWindow", "Borrar Campos", nullptr));
        label_5->setText(QApplication::translate("DesempenoWindow", "Jefe", nullptr));
        label_6->setText(QApplication::translate("DesempenoWindow", "Calificar Empleados", nullptr));
        botonEnviar->setText(QApplication::translate("DesempenoWindow", "Enviar Calificaci\303\263n", nullptr));
        botonReporte->setText(QApplication::translate("DesempenoWindow", "Generar Reporte", nullptr));
        botonRefrescar->setText(QApplication::translate("DesempenoWindow", "Limpiar \303\201rbol", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DesempenoWindow: public Ui_DesempenoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESEMPENOWINDOW_H
