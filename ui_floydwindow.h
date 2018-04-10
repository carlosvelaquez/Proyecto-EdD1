/********************************************************************************
** Form generated from reading UI file 'floydwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLOYDWINDOW_H
#define UI_FLOYDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FloydWindow
{
public:
    QFrame *frame;
    QPushButton *pushButton;
    QLabel *label_2;
    QTableWidget *tableWidget;

    void setupUi(QWidget *FloydWindow)
    {
        if (FloydWindow->objectName().isEmpty())
            FloydWindow->setObjectName(QStringLiteral("FloydWindow"));
        FloydWindow->resize(570, 444);
        FloydWindow->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame = new QFrame(FloydWindow);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(-10, 0, 581, 61));
        frame->setStyleSheet(QLatin1String("QFrame{\n"
"background-color: #673AB7;\n"
"}\n"
"\n"
"QLabel{\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton{\n"
"background-color:#512DA8;\n"
"color: white;\n"
"border: none;\n"
"font: 11pt \"Lato\";\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: #311B92;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(470, 0, 111, 61));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 10, 381, 31));
        QFont font;
        font.setFamily(QStringLiteral("Montserrat"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        tableWidget = new QTableWidget(FloydWindow);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 70, 551, 361));

        retranslateUi(FloydWindow);

        QMetaObject::connectSlotsByName(FloydWindow);
    } // setupUi

    void retranslateUi(QWidget *FloydWindow)
    {
        FloydWindow->setWindowTitle(QApplication::translate("FloydWindow", "Costo M\303\255nimo - Floyd | Proyecto EdD I", nullptr));
        pushButton->setText(QApplication::translate("FloydWindow", "Cargar Grafo", nullptr));
        label_2->setText(QApplication::translate("FloydWindow", "Costo M\303\255nimo - Floyd", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FloydWindow: public Ui_FloydWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLOYDWINDOW_H
