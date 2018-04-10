/********************************************************************************
** Form generated from reading UI file 'huffmanwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HUFFMANWINDOW_H
#define UI_HUFFMANWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_huffmanwindow
{
public:
    QTreeWidget *QtreeWidgetx;
    QFrame *frame_3;
    QLabel *label_2;
    QPushButton *pushbutton_load;
    QFrame *Frame_1;
    QLineEdit *QlineEdit;
    QPushButton *pushButton_compress;
    QTextEdit *listaLetras;

    void setupUi(QWidget *huffmanwindow)
    {
        if (huffmanwindow->objectName().isEmpty())
            huffmanwindow->setObjectName(QStringLiteral("huffmanwindow"));
        huffmanwindow->resize(751, 450);
        huffmanwindow->setStyleSheet(QLatin1String("QWidget{\n"
"	background-color:white;\n"
"}"));
        QtreeWidgetx = new QTreeWidget(huffmanwindow);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("Frecuencias de Simbolos"));
        QtreeWidgetx->setHeaderItem(__qtreewidgetitem);
        QtreeWidgetx->setObjectName(QStringLiteral("QtreeWidgetx"));
        QtreeWidgetx->setGeometry(QRect(10, 70, 281, 311));
        frame_3 = new QFrame(huffmanwindow);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 751, 61));
        frame_3->setStyleSheet(QLatin1String("QFrame{\n"
"background-color:#CDDC39;\n"
"}\n"
"\n"
"QLabel{\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton{\n"
"background-color: #AFB42B;\n"
"color: white;\n"
"border: none;\n"
"font: 11pt \"Lato\";\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color:#827717;\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 431, 31));
        QFont font;
        font.setFamily(QStringLiteral("Montserrat"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        pushbutton_load = new QPushButton(frame_3);
        pushbutton_load->setObjectName(QStringLiteral("pushbutton_load"));
        pushbutton_load->setGeometry(QRect(630, 0, 121, 61));
        pushbutton_load->setStyleSheet(QStringLiteral(""));
        Frame_1 = new QFrame(huffmanwindow);
        Frame_1->setObjectName(QStringLiteral("Frame_1"));
        Frame_1->setGeometry(QRect(0, 390, 751, 61));
        Frame_1->setStyleSheet(QLatin1String("QFrame{\n"
"background-color:#CDDC39;\n"
"}\n"
"\n"
"QLabel{\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton{\n"
"background-color: #AFB42B;\n"
"color: white;\n"
"border: none;\n"
"font: 11pt \"Lato\";\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color:#827717;\n"
"}"));
        Frame_1->setFrameShape(QFrame::StyledPanel);
        Frame_1->setFrameShadow(QFrame::Raised);
        QlineEdit = new QLineEdit(Frame_1);
        QlineEdit->setObjectName(QStringLiteral("QlineEdit"));
        QlineEdit->setGeometry(QRect(20, 20, 571, 23));
        pushButton_compress = new QPushButton(Frame_1);
        pushButton_compress->setObjectName(QStringLiteral("pushButton_compress"));
        pushButton_compress->setGeometry(QRect(610, 2, 141, 61));
        listaLetras = new QTextEdit(huffmanwindow);
        listaLetras->setObjectName(QStringLiteral("listaLetras"));
        listaLetras->setGeometry(QRect(300, 70, 431, 311));

        retranslateUi(huffmanwindow);

        QMetaObject::connectSlotsByName(huffmanwindow);
    } // setupUi

    void retranslateUi(QWidget *huffmanwindow)
    {
        huffmanwindow->setWindowTitle(QApplication::translate("huffmanwindow", "Compresi\303\263n de Texto | Proyecto EdD I", nullptr));
        label_2->setText(QApplication::translate("huffmanwindow", "Compresi\303\263n de Archivos de Texto", nullptr));
        pushbutton_load->setText(QApplication::translate("huffmanwindow", "Cargar Archivo", nullptr));
        QlineEdit->setPlaceholderText(QApplication::translate("huffmanwindow", "Ingrese texto para comprimir.", nullptr));
        pushButton_compress->setText(QApplication::translate("huffmanwindow", "Comprimir Texto", nullptr));
    } // retranslateUi

};

namespace Ui {
    class huffmanwindow: public Ui_huffmanwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HUFFMANWINDOW_H
