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
    QLabel *label;
    QPushButton *pushButton;
    QTableWidget *tableWidget;

    void setupUi(QWidget *FloydWindow)
    {
        if (FloydWindow->objectName().isEmpty())
            FloydWindow->setObjectName(QStringLiteral("FloydWindow"));
        FloydWindow->resize(570, 447);
        FloydWindow->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame = new QFrame(FloydWindow);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(-10, 0, 581, 71));
        frame->setStyleSheet(QStringLiteral("background-color: #512DA8;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 141, 31));
        label->setStyleSheet(QStringLiteral("font: 75 15pt \"WenQuanYi Micro Hei Mono\";"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(470, 0, 111, 71));
        tableWidget = new QTableWidget(FloydWindow);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 80, 541, 351));

        retranslateUi(FloydWindow);

        QMetaObject::connectSlotsByName(FloydWindow);
    } // setupUi

    void retranslateUi(QWidget *FloydWindow)
    {
        FloydWindow->setWindowTitle(QApplication::translate("FloydWindow", "Form", nullptr));
        label->setText(QApplication::translate("FloydWindow", "FLOYD", nullptr));
        pushButton->setText(QApplication::translate("FloydWindow", "Cargar Grafo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FloydWindow: public Ui_FloydWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLOYDWINDOW_H
