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
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_huffmanwindow
{
public:
    QTreeWidget *treeWidget;
    QFrame *frame_3;
    QLabel *label_2;
    QPushButton *pushbutton_load;
    QFrame *frame;
    QLineEdit *lineEdit;
    QPushButton *pushButton_compress;

    void setupUi(QWidget *huffmanwindow)
    {
        if (huffmanwindow->objectName().isEmpty())
            huffmanwindow->setObjectName(QStringLiteral("huffmanwindow"));
        huffmanwindow->resize(748, 451);
        huffmanwindow->setStyleSheet(QLatin1String("QWidget{\n"
"	background-color:white;\n"
"}"));
        treeWidget = new QTreeWidget(huffmanwindow);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("Frecuencias de Simbolos"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(10, 70, 721, 311));
        frame_3 = new QFrame(huffmanwindow);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 751, 61));
        frame_3->setStyleSheet(QLatin1String("QFrame{\n"
"background-color:#795548;\n"
"}\n"
"\n"
"QLabel{\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton{\n"
"background-color: #5D4037;\n"
"color: white;\n"
"border: none;\n"
"font: 11pt \"Lato\";\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color:#3E2723;\n"
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
        frame = new QFrame(huffmanwindow);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 390, 751, 61));
        frame->setStyleSheet(QLatin1String("QFrame{\n"
"background-color:#795548;\n"
"}\n"
"\n"
"QLabel{\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton{\n"
"background-color: #5D4037;\n"
"color: white;\n"
"border: none;\n"
"font: 11pt \"Lato\";\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color:#3E2723;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 20, 571, 23));
        pushButton_compress = new QPushButton(frame);
        pushButton_compress->setObjectName(QStringLiteral("pushButton_compress"));
        pushButton_compress->setGeometry(QRect(610, 2, 141, 61));

        retranslateUi(huffmanwindow);

        QMetaObject::connectSlotsByName(huffmanwindow);
    } // setupUi

    void retranslateUi(QWidget *huffmanwindow)
    {
        huffmanwindow->setWindowTitle(QApplication::translate("huffmanwindow", "Form", nullptr));
        label_2->setText(QApplication::translate("huffmanwindow", "Compresi\303\263n de Archivos de Texto", nullptr));
        pushbutton_load->setText(QApplication::translate("huffmanwindow", "Cargar Archivo", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("huffmanwindow", "Ingrese texto para comprimir.", nullptr));
        pushButton_compress->setText(QApplication::translate("huffmanwindow", "Comprimir Texto", nullptr));
    } // retranslateUi

};

namespace Ui {
    class huffmanwindow: public Ui_huffmanwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HUFFMANWINDOW_H
