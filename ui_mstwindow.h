/********************************************************************************
** Form generated from reading UI file 'mstwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MSTWINDOW_H
#define UI_MSTWINDOW_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MSTWindow
{
public:
    QFrame *frame_2;
    QLabel *label_2;
    QPushButton *botonNuevoGrafo;
    QFrame *frame_3;
    QPushButton *pbEncontrarMST;
    QPushButton *pbRevertir;
    QLabel *label;
    QLabel *lbVista;
    QFrame *frame_4;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *leNombreVertice;
    QPushButton *botonCrearVertice;
    QPushButton *botonConectarVertices;
    QLabel *label_6;
    QComboBox *cbVertice1;
    QLabel *label_7;
    QComboBox *cbVertice2;
    QFrame *line_2;
    QFrame *line_3;
    QLabel *label_8;
    QDoubleSpinBox *sbCosto;
    QLabel *label_9;

    void setupUi(QWidget *MSTWindow)
    {
        if (MSTWindow->objectName().isEmpty())
            MSTWindow->setObjectName(QStringLiteral("MSTWindow"));
        MSTWindow->resize(750, 470);
        MSTWindow->setStyleSheet(QLatin1String("QWidget{\n"
"background-color: white;\n"
"}"));
        frame_2 = new QFrame(MSTWindow);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 751, 61));
        frame_2->setStyleSheet(QLatin1String("QFrame{\n"
"background-color: #3F51B5;\n"
"}\n"
"\n"
"QLabel{\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton{\n"
"background-color: #303F9F;\n"
"color: white;\n"
"border: none;\n"
"font: 11pt \"Lato\";\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color:#1A237E;\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 501, 31));
        QFont font;
        font.setFamily(QStringLiteral("Montserrat"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        botonNuevoGrafo = new QPushButton(frame_2);
        botonNuevoGrafo->setObjectName(QStringLiteral("botonNuevoGrafo"));
        botonNuevoGrafo->setGeometry(QRect(630, 0, 121, 61));
        frame_3 = new QFrame(MSTWindow);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(0, 430, 751, 41));
        frame_3->setStyleSheet(QLatin1String("QFrame{\n"
"background-color: #3F51B5;\n"
"}\n"
"\n"
"QLabel{\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton{\n"
"background-color: #303F9F;\n"
"color: white;\n"
"border: none;\n"
"font: 11pt \"Lato\";\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color:#1A237E;\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        pbEncontrarMST = new QPushButton(frame_3);
        pbEncontrarMST->setObjectName(QStringLiteral("pbEncontrarMST"));
        pbEncontrarMST->setGeometry(QRect(630, 0, 121, 41));
        pbRevertir = new QPushButton(frame_3);
        pbRevertir->setObjectName(QStringLiteral("pbRevertir"));
        pbRevertir->setGeometry(QRect(510, 0, 121, 41));
        label = new QLabel(frame_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 81, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Lato"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        lbVista = new QLabel(frame_3);
        lbVista->setObjectName(QStringLiteral("lbVista"));
        lbVista->setGeometry(QRect(90, 10, 221, 21));
        QFont font2;
        font2.setFamily(QStringLiteral("Montserrat"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        lbVista->setFont(font2);
        frame_4 = new QFrame(MSTWindow);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(530, 70, 201, 351));
        frame_4->setStyleSheet(QLatin1String("QComboBox{\n"
"color: black\n"
"}"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 10, 181, 16));
        label_4->setFont(font2);
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(frame_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 40, 121, 16));
        leNombreVertice = new QLineEdit(frame_4);
        leNombreVertice->setObjectName(QStringLiteral("leNombreVertice"));
        leNombreVertice->setGeometry(QRect(10, 60, 181, 23));
        botonCrearVertice = new QPushButton(frame_4);
        botonCrearVertice->setObjectName(QStringLiteral("botonCrearVertice"));
        botonCrearVertice->setGeometry(QRect(10, 90, 181, 23));
        botonConectarVertices = new QPushButton(frame_4);
        botonConectarVertices->setObjectName(QStringLiteral("botonConectarVertices"));
        botonConectarVertices->setGeometry(QRect(10, 320, 181, 23));
        label_6 = new QLabel(frame_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 180, 61, 21));
        cbVertice1 = new QComboBox(frame_4);
        cbVertice1->setObjectName(QStringLiteral("cbVertice1"));
        cbVertice1->setGeometry(QRect(80, 180, 111, 23));
        label_7 = new QLabel(frame_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 240, 61, 21));
        cbVertice2 = new QComboBox(frame_4);
        cbVertice2->setObjectName(QStringLiteral("cbVertice2"));
        cbVertice2->setGeometry(QRect(80, 240, 111, 23));
        line_2 = new QFrame(frame_4);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(110, 210, 51, 16));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(frame_4);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(17, 120, 171, 31));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_8 = new QLabel(frame_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 280, 61, 21));
        sbCosto = new QDoubleSpinBox(frame_4);
        sbCosto->setObjectName(QStringLiteral("sbCosto"));
        sbCosto->setGeometry(QRect(80, 280, 111, 24));
        sbCosto->setMinimum(-9999);
        sbCosto->setMaximum(9999);
        label_9 = new QLabel(frame_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 150, 181, 16));
        label_9->setFont(font2);
        label_9->setAlignment(Qt::AlignCenter);
        line_2->raise();
        line_3->raise();
        label_4->raise();
        label_5->raise();
        leNombreVertice->raise();
        botonCrearVertice->raise();
        botonConectarVertices->raise();
        label_6->raise();
        cbVertice1->raise();
        label_7->raise();
        cbVertice2->raise();
        label_8->raise();
        sbCosto->raise();
        label_9->raise();

        retranslateUi(MSTWindow);

        QMetaObject::connectSlotsByName(MSTWindow);
    } // setupUi

    void retranslateUi(QWidget *MSTWindow)
    {
        MSTWindow->setWindowTitle(QApplication::translate("MSTWindow", "\303\201rboles de Expansi\303\263n M\303\255nima | Proyecto EdD I", nullptr));
        label_2->setText(QApplication::translate("MSTWindow", "\303\201rboles de Expansi\303\263n M\303\255nima", nullptr));
        botonNuevoGrafo->setText(QApplication::translate("MSTWindow", "Nuevo Grafo", nullptr));
        pbEncontrarMST->setText(QApplication::translate("MSTWindow", "Vista MST", nullptr));
        pbRevertir->setText(QApplication::translate("MSTWindow", "Vista Original", nullptr));
        label->setText(QApplication::translate("MSTWindow", "Vista Actual:", nullptr));
        lbVista->setText(QApplication::translate("MSTWindow", "Grafo Original", nullptr));
        label_4->setText(QApplication::translate("MSTWindow", "Crear V\303\251rtice", nullptr));
        label_5->setText(QApplication::translate("MSTWindow", "Nombre del V\303\251rtice", nullptr));
        botonCrearVertice->setText(QApplication::translate("MSTWindow", "Crear Nuevo V\303\251rtice", nullptr));
        botonConectarVertices->setText(QApplication::translate("MSTWindow", "Crear Nueva Arista", nullptr));
        label_6->setText(QApplication::translate("MSTWindow", "V\303\251rtice 1", nullptr));
        label_7->setText(QApplication::translate("MSTWindow", "V\303\251rtice 2", nullptr));
        label_8->setText(QApplication::translate("MSTWindow", "Costo", nullptr));
        label_9->setText(QApplication::translate("MSTWindow", "Crear Arista", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MSTWindow: public Ui_MSTWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MSTWINDOW_H
