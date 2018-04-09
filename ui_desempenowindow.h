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
    QFrame *frame;
    QPushButton *botonGuardar;
    QPushButton *botonCargar_2;
    QTreeView *treeView;
    QFrame *frame_2;
    QLabel *label_6;
    QPushButton *botonBorrar;
    QPushButton *botonCrear;
    QLineEdit *nombreField;
    QLineEdit *puestoField;
    QComboBox *jefeComboBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QFrame *line;
    QLabel *label_7;
    QLabel *label_5;
    QComboBox *calComboBox;
    QLabel *label_8;
    QDoubleSpinBox *calSpinner;
    QPushButton *botonEnviar;
    QFrame *frame_3;
    QLabel *label;
    QPushButton *botonRefrescar;

    void setupUi(QWidget *DesempenoWindow)
    {
        if (DesempenoWindow->objectName().isEmpty())
            DesempenoWindow->setObjectName(QStringLiteral("DesempenoWindow"));
        DesempenoWindow->resize(750, 540);
        DesempenoWindow->setStyleSheet(QLatin1String("QWidget{\n"
"	background-color:white;\n"
"}\n"
""));
        frame = new QFrame(DesempenoWindow);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 500, 751, 41));
        frame->setStyleSheet(QLatin1String("QFrame{\n"
"background-color: #4CAF50;\n"
"}\n"
"\n"
"QLabel{\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton{\n"
"background-color: rgb(72, 166, 75);\n"
"color: white;\n"
"border: none;\n"
"font: 11pt \"Lato\";\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(61, 141, 62);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Plain);
        botonGuardar = new QPushButton(frame);
        botonGuardar->setObjectName(QStringLiteral("botonGuardar"));
        botonGuardar->setGeometry(QRect(460, 0, 141, 41));
        botonCargar_2 = new QPushButton(frame);
        botonCargar_2->setObjectName(QStringLiteral("botonCargar_2"));
        botonCargar_2->setGeometry(QRect(600, 0, 141, 41));
        treeView = new QTreeView(DesempenoWindow);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setGeometry(QRect(10, 70, 441, 411));
        treeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeView->setUniformRowHeights(true);
        treeView->setAnimated(true);
        frame_2 = new QFrame(DesempenoWindow);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(470, 70, 261, 411));
        frame_2->setStyleSheet(QStringLiteral(""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_6 = new QLabel(frame_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 10, 181, 21));
        QFont font;
        font.setFamily(QStringLiteral("Montserrat"));
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label_6->setFont(font);
        botonBorrar = new QPushButton(frame_2);
        botonBorrar->setObjectName(QStringLiteral("botonBorrar"));
        botonBorrar->setGeometry(QRect(20, 210, 101, 21));
        botonCrear = new QPushButton(frame_2);
        botonCrear->setObjectName(QStringLiteral("botonCrear"));
        botonCrear->setGeometry(QRect(130, 210, 111, 21));
        nombreField = new QLineEdit(frame_2);
        nombreField->setObjectName(QStringLiteral("nombreField"));
        nombreField->setGeometry(QRect(20, 70, 221, 23));
        puestoField = new QLineEdit(frame_2);
        puestoField->setObjectName(QStringLiteral("puestoField"));
        puestoField->setGeometry(QRect(20, 130, 221, 23));
        jefeComboBox = new QComboBox(frame_2);
        jefeComboBox->setObjectName(QStringLiteral("jefeComboBox"));
        jefeComboBox->setGeometry(QRect(100, 170, 141, 23));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 141, 16));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 110, 141, 16));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 170, 71, 21));
        line = new QFrame(frame_2);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(30, 240, 201, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 260, 241, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Montserrat"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 300, 61, 21));
        QFont font2;
        font2.setFamily(QStringLiteral("Lato"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        label_5->setFont(font2);
        calComboBox = new QComboBox(frame_2);
        calComboBox->setObjectName(QStringLiteral("calComboBox"));
        calComboBox->setGeometry(QRect(100, 300, 141, 23));
        calComboBox->setStyleSheet(QLatin1String("background-color:white;\n"
"color:black;"));
        label_8 = new QLabel(frame_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 330, 71, 21));
        QFont font3;
        font3.setFamily(QStringLiteral("Lato"));
        font3.setPointSize(10);
        label_8->setFont(font3);
        calSpinner = new QDoubleSpinBox(frame_2);
        calSpinner->setObjectName(QStringLiteral("calSpinner"));
        calSpinner->setGeometry(QRect(100, 330, 141, 24));
        calSpinner->setMaximum(100);
        botonEnviar = new QPushButton(frame_2);
        botonEnviar->setObjectName(QStringLiteral("botonEnviar"));
        botonEnviar->setGeometry(QRect(40, 370, 191, 21));
        frame_3 = new QFrame(DesempenoWindow);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(-10, -10, 761, 71));
        frame_3->setStyleSheet(QLatin1String("QFrame{\n"
"background-color: #4CAF50;\n"
"}\n"
"\n"
"QLabel{\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton{\n"
"background-color: rgb(72, 166, 75);\n"
"color: white;\n"
"border: none;\n"
"font: 11pt \"Lato\";\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(61, 141, 62);\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 381, 31));
        QFont font4;
        font4.setFamily(QStringLiteral("Montserrat"));
        font4.setPointSize(20);
        font4.setBold(true);
        font4.setWeight(75);
        label->setFont(font4);
        botonRefrescar = new QPushButton(frame_3);
        botonRefrescar->setObjectName(QStringLiteral("botonRefrescar"));
        botonRefrescar->setGeometry(QRect(640, 10, 121, 61));

        retranslateUi(DesempenoWindow);

        QMetaObject::connectSlotsByName(DesempenoWindow);
    } // setupUi

    void retranslateUi(QWidget *DesempenoWindow)
    {
        DesempenoWindow->setWindowTitle(QApplication::translate("DesempenoWindow", "Evaluaci\303\263n por Desempe\303\261o", nullptr));
        botonGuardar->setText(QApplication::translate("DesempenoWindow", "Guardar Registros", nullptr));
        botonCargar_2->setText(QApplication::translate("DesempenoWindow", "Cargar Registros", nullptr));
        label_6->setText(QApplication::translate("DesempenoWindow", "A\303\261adir Empleados", nullptr));
        botonBorrar->setText(QApplication::translate("DesempenoWindow", "Borrar Campos", nullptr));
        botonCrear->setText(QApplication::translate("DesempenoWindow", "Crear Empleado", nullptr));
        label_2->setText(QApplication::translate("DesempenoWindow", "Nombre del Empleado", nullptr));
        label_3->setText(QApplication::translate("DesempenoWindow", "Puesto del Empleado", nullptr));
        label_4->setText(QApplication::translate("DesempenoWindow", "Supervisor", nullptr));
        label_7->setText(QApplication::translate("DesempenoWindow", "Calificar Empleados", nullptr));
        label_5->setText(QApplication::translate("DesempenoWindow", "Empleado", nullptr));
        label_8->setText(QApplication::translate("DesempenoWindow", "Calificaci\303\263n", nullptr));
        botonEnviar->setText(QApplication::translate("DesempenoWindow", "Enviar Calificaci\303\263n", nullptr));
        label->setText(QApplication::translate("DesempenoWindow", "Evaluaci\303\263n por Desempe\303\261o", nullptr));
        botonRefrescar->setText(QApplication::translate("DesempenoWindow", "Limpiar \303\201rbol", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DesempenoWindow: public Ui_DesempenoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESEMPENOWINDOW_H
