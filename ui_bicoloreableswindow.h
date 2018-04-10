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

QT_BEGIN_NAMESPACE

class Ui_BicoloreablesWindow
{
public:
    QFrame *frame;
    QLabel *label;
    QPushButton *botonNuevoGrafo;
    QFrame *frame_2;
    QPushButton *botonCorrer;
    QLabel *label_7;
    QLabel *resultadoLabel;
    QPushButton *botonGuardarGrafo;
    QPushButton *botonCargarGrafo;
    QFrame *frame_4;
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
    QLabel *label_6;

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
        botonNuevoGrafo->setGeometry(QRect(640, 0, 111, 61));
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
        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 5, 71, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Lato"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setWeight(50);
        label_7->setFont(font1);
        resultadoLabel = new QLabel(frame_2);
        resultadoLabel->setObjectName(QStringLiteral("resultadoLabel"));
        resultadoLabel->setGeometry(QRect(90, 4, 211, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Montserrat"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        resultadoLabel->setFont(font2);
        botonGuardarGrafo = new QPushButton(frame_2);
        botonGuardarGrafo->setObjectName(QStringLiteral("botonGuardarGrafo"));
        botonGuardarGrafo->setGeometry(QRect(340, 0, 111, 41));
        botonCargarGrafo = new QPushButton(frame_2);
        botonCargarGrafo->setObjectName(QStringLiteral("botonCargarGrafo"));
        botonCargarGrafo->setGeometry(QRect(450, 0, 111, 41));
        frame_4 = new QFrame(BicoloreablesWindow);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(530, 70, 201, 351));
        frame_4->setStyleSheet(QLatin1String("QComboBox{\n"
"color: black\n"
"}"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 181, 16));
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignCenter);
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
        botonConectarVertices->setGeometry(QRect(10, 310, 181, 23));
        label_4 = new QLabel(frame_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 180, 61, 16));
        cbVertice1 = new QComboBox(frame_4);
        cbVertice1->setObjectName(QStringLiteral("cbVertice1"));
        cbVertice1->setGeometry(QRect(10, 200, 181, 23));
        label_5 = new QLabel(frame_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 250, 61, 16));
        cbVertice2 = new QComboBox(frame_4);
        cbVertice2->setObjectName(QStringLiteral("cbVertice2"));
        cbVertice2->setGeometry(QRect(10, 270, 181, 23));
        line_2 = new QFrame(frame_4);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(90, 230, 20, 21));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(frame_4);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(17, 120, 171, 31));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_6 = new QLabel(frame_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 150, 181, 16));
        label_6->setFont(font2);
        label_6->setStyleSheet(QStringLiteral(""));
        label_6->setAlignment(Qt::AlignCenter);

        retranslateUi(BicoloreablesWindow);

        QMetaObject::connectSlotsByName(BicoloreablesWindow);
    } // setupUi

    void retranslateUi(QWidget *BicoloreablesWindow)
    {
        BicoloreablesWindow->setWindowTitle(QApplication::translate("BicoloreablesWindow", "Grafos Bicoloreables | Proyecto EdD I", nullptr));
        label->setText(QApplication::translate("BicoloreablesWindow", "Grafos Bi-coloreables", nullptr));
        botonNuevoGrafo->setText(QApplication::translate("BicoloreablesWindow", "Nuevo Grafo", nullptr));
        botonCorrer->setText(QApplication::translate("BicoloreablesWindow", "Correr con Grafo Actual", nullptr));
        label_7->setText(QApplication::translate("BicoloreablesWindow", "Resultado:", nullptr));
        resultadoLabel->setText(QApplication::translate("BicoloreablesWindow", "No analizado a\303\272n", nullptr));
        botonGuardarGrafo->setText(QApplication::translate("BicoloreablesWindow", "Guardar Grafo", nullptr));
        botonCargarGrafo->setText(QApplication::translate("BicoloreablesWindow", "Cargar Grafo", nullptr));
        label_2->setText(QApplication::translate("BicoloreablesWindow", "Crear V\303\251rtice", nullptr));
        label_3->setText(QApplication::translate("BicoloreablesWindow", "Nombre del V\303\251rtice", nullptr));
        botonCrearVertice->setText(QApplication::translate("BicoloreablesWindow", "Crear Nuevo V\303\251rtice", nullptr));
        botonConectarVertices->setText(QApplication::translate("BicoloreablesWindow", "Crear Nueva Arista", nullptr));
        label_4->setText(QApplication::translate("BicoloreablesWindow", "V\303\251rtice 1", nullptr));
        label_5->setText(QApplication::translate("BicoloreablesWindow", "V\303\251rtice 2", nullptr));
        label_6->setText(QApplication::translate("BicoloreablesWindow", "Crear Arista", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BicoloreablesWindow: public Ui_BicoloreablesWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BICOLOREABLESWINDOW_H
