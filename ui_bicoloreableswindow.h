/********************************************************************************
** Form generated from reading UI file 'bicoloreableswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BICOLOREABLESWINDOW_H
#define UI_BICOLOREABLESWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "dragbutton.h"

QT_BEGIN_NAMESPACE

class Ui_BicoloreablesWindow
{
public:
    QFrame *frame;
    QLabel *label;
    QPushButton *botonNuevoGrafo;
    QFrame *frame_2;
    QPushButton *botonCorrer;
    QPushButton *botonCargar;
    QFrame *grafoFrame;
    QLabel *label_6;
    DragButton *pushButton;
    QFrame *frame_4;
    QPushButton *botonGuardarGrafo;
    QFrame *line;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *leNombreVertice;
    QPushButton *botonCrearVertice;
    QPushButton *botonConectarVertices;
    QLabel *label_4;
    QComboBox *cbVertice1;
    QLabel *label_5;
    QComboBox *cbVertice2;
    QFrame *line_2;
    QFrame *line_3;

    void setupUi(QWidget *BicoloreablesWindow)
    {
        if (BicoloreablesWindow->objectName().isEmpty())
            BicoloreablesWindow->setObjectName(QStringLiteral("BicoloreablesWindow"));
        BicoloreablesWindow->resize(750, 470);
        BicoloreablesWindow->setStyleSheet(QLatin1String("QWidget{\n"
"background-color: white;\n"
"}"));
        frame = new QFrame(BicoloreablesWindow);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 751, 61));
        frame->setStyleSheet(QLatin1String("QFrame{\n"
"background-color: #9C27B0;\n"
"}\n"
"\n"
"QLabel{\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton{\n"
"background-color:rgb(116, 28, 131);\n"
"color: white;\n"
"border: none;\n"
"font: 11pt \"Lato\";\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(60, 14, 68);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 281, 31));
        QFont font;
        font.setFamily(QStringLiteral("Montserrat"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        botonNuevoGrafo = new QPushButton(frame);
        botonNuevoGrafo->setObjectName(QStringLiteral("botonNuevoGrafo"));
        botonNuevoGrafo->setGeometry(QRect(630, 0, 121, 61));
        frame_2 = new QFrame(BicoloreablesWindow);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(0, 429, 751, 41));
        frame_2->setStyleSheet(QLatin1String("QFrame{\n"
"background-color: #9C27B0;\n"
"}\n"
"\n"
"QLabel{\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton{\n"
"background-color:rgb(116, 28, 131);\n"
"color: white;\n"
"border: none;\n"
"font: 11pt \"Lato\";\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(60, 14, 68);\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        botonCorrer = new QPushButton(frame_2);
        botonCorrer->setObjectName(QStringLiteral("botonCorrer"));
        botonCorrer->setGeometry(QRect(570, 0, 181, 41));
        botonCargar = new QPushButton(frame_2);
        botonCargar->setObjectName(QStringLiteral("botonCargar"));
        botonCargar->setGeometry(QRect(390, 0, 181, 41));
        grafoFrame = new QFrame(BicoloreablesWindow);
        grafoFrame->setObjectName(QStringLiteral("grafoFrame"));
        grafoFrame->setGeometry(QRect(10, 70, 501, 351));
        grafoFrame->setFrameShape(QFrame::StyledPanel);
        grafoFrame->setFrameShadow(QFrame::Raised);
        label_6 = new QLabel(grafoFrame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 330, 291, 16));
        pushButton = new DragButton(grafoFrame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 100, 111, 50));
        pushButton->setStyleSheet(QLatin1String("border: none;\n"
"background-color: white;"));
        QIcon icon;
        icon.addFile(QStringLiteral("../Pictures/profile.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(50, 50));
        pushButton->raise();
        label_6->raise();
        frame_4 = new QFrame(BicoloreablesWindow);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(530, 70, 201, 351));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        botonGuardarGrafo = new QPushButton(frame_4);
        botonGuardarGrafo->setObjectName(QStringLiteral("botonGuardarGrafo"));
        botonGuardarGrafo->setGeometry(QRect(10, 322, 181, 21));
        line = new QFrame(frame_4);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 300, 181, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(frame_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 10, 111, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("Montserrat"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_3 = new QLabel(frame_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 40, 121, 16));
        leNombreVertice = new QLineEdit(frame_4);
        leNombreVertice->setObjectName(QStringLiteral("leNombreVertice"));
        leNombreVertice->setGeometry(QRect(10, 60, 181, 23));
        botonCrearVertice = new QPushButton(frame_4);
        botonCrearVertice->setObjectName(QStringLiteral("botonCrearVertice"));
        botonCrearVertice->setGeometry(QRect(10, 90, 181, 23));
        botonConectarVertices = new QPushButton(frame_4);
        botonConectarVertices->setObjectName(QStringLiteral("botonConectarVertices"));
        botonConectarVertices->setGeometry(QRect(10, 270, 181, 23));
        label_4 = new QLabel(frame_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 150, 61, 16));
        cbVertice1 = new QComboBox(frame_4);
        cbVertice1->setObjectName(QStringLiteral("cbVertice1"));
        cbVertice1->setGeometry(QRect(10, 170, 181, 23));
        label_5 = new QLabel(frame_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 220, 61, 16));
        cbVertice2 = new QComboBox(frame_4);
        cbVertice2->setObjectName(QStringLiteral("cbVertice2"));
        cbVertice2->setGeometry(QRect(10, 240, 181, 23));
        line_2 = new QFrame(frame_4);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(90, 200, 20, 21));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(frame_4);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(17, 120, 171, 31));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        retranslateUi(BicoloreablesWindow);

        QMetaObject::connectSlotsByName(BicoloreablesWindow);
    } // setupUi

    void retranslateUi(QWidget *BicoloreablesWindow)
    {
        BicoloreablesWindow->setWindowTitle(QApplication::translate("BicoloreablesWindow", "Form", nullptr));
        label->setText(QApplication::translate("BicoloreablesWindow", "Grafos Bi-coloreables", nullptr));
        botonNuevoGrafo->setText(QApplication::translate("BicoloreablesWindow", "Nuevo Grafo", nullptr));
        botonCorrer->setText(QApplication::translate("BicoloreablesWindow", "Correr con Grafo Actual", nullptr));
        botonCargar->setText(QApplication::translate("BicoloreablesWindow", "Cargar Grafo Guardado", nullptr));
        label_6->setText(QApplication::translate("BicoloreablesWindow", "Puede arrastrar los v\303\251rtices para reordenarlos.", nullptr));
        pushButton->setText(QApplication::translate("BicoloreablesWindow", "V\303\251rtice 1", nullptr));
        botonGuardarGrafo->setText(QApplication::translate("BicoloreablesWindow", "Guardar Grafo", nullptr));
        label_2->setText(QApplication::translate("BicoloreablesWindow", "Crear V\303\251rtice", nullptr));
        label_3->setText(QApplication::translate("BicoloreablesWindow", "Nombre del V\303\251rtice", nullptr));
        botonCrearVertice->setText(QApplication::translate("BicoloreablesWindow", "Crear Nuevo V\303\251rtice", nullptr));
        botonConectarVertices->setText(QApplication::translate("BicoloreablesWindow", "Conectar V\303\251rtices", nullptr));
        label_4->setText(QApplication::translate("BicoloreablesWindow", "V\303\251rtice 1", nullptr));
        label_5->setText(QApplication::translate("BicoloreablesWindow", "V\303\251rtice 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BicoloreablesWindow: public Ui_BicoloreablesWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BICOLOREABLESWINDOW_H
