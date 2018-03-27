/********************************************************************************
** Form generated from reading UI file 'expresioneswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPRESIONESWINDOW_H
#define UI_EXPRESIONESWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExpresionesWindow
{
public:
    QLabel *label;
    QPushButton *botonLimpiar;
    QPushButton *botonResolver;
    QTextEdit *textEditHist;
    QLineEdit *lineEditExp;

    void setupUi(QWidget *ExpresionesWindow)
    {
        if (ExpresionesWindow->objectName().isEmpty())
            ExpresionesWindow->setObjectName(QStringLiteral("ExpresionesWindow"));
        ExpresionesWindow->resize(514, 299);
        label = new QLabel(ExpresionesWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 501, 31));
        QFont font;
        font.setFamily(QStringLiteral("Montserrat"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        botonLimpiar = new QPushButton(ExpresionesWindow);
        botonLimpiar->setObjectName(QStringLiteral("botonLimpiar"));
        botonLimpiar->setGeometry(QRect(10, 260, 101, 23));
        botonResolver = new QPushButton(ExpresionesWindow);
        botonResolver->setObjectName(QStringLiteral("botonResolver"));
        botonResolver->setGeometry(QRect(420, 260, 80, 23));
        textEditHist = new QTextEdit(ExpresionesWindow);
        textEditHist->setObjectName(QStringLiteral("textEditHist"));
        textEditHist->setEnabled(true);
        textEditHist->setGeometry(QRect(10, 50, 491, 171));
        textEditHist->setFocusPolicy(Qt::NoFocus);
        textEditHist->setReadOnly(true);
        lineEditExp = new QLineEdit(ExpresionesWindow);
        lineEditExp->setObjectName(QStringLiteral("lineEditExp"));
        lineEditExp->setGeometry(QRect(10, 230, 491, 23));

        retranslateUi(ExpresionesWindow);

        QMetaObject::connectSlotsByName(ExpresionesWindow);
    } // setupUi

    void retranslateUi(QWidget *ExpresionesWindow)
    {
        ExpresionesWindow->setWindowTitle(QApplication::translate("ExpresionesWindow", "Resoluci\303\263n de Expresiones | Proyecto EdD I", nullptr));
        label->setText(QApplication::translate("ExpresionesWindow", "Resoluci\303\263n de Expresiones Matem\303\241ticas", nullptr));
        botonLimpiar->setText(QApplication::translate("ExpresionesWindow", "Limpiar Todo", nullptr));
        botonResolver->setText(QApplication::translate("ExpresionesWindow", "Resolver", nullptr));
        textEditHist->setPlaceholderText(QApplication::translate("ExpresionesWindow", "Historial de Operaciones", nullptr));
        lineEditExp->setPlaceholderText(QApplication::translate("ExpresionesWindow", "Ingrese una Expresi\303\263n Matem\303\241tica para Resolver", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExpresionesWindow: public Ui_ExpresionesWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPRESIONESWINDOW_H
