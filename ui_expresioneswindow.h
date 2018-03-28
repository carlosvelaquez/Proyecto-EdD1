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
        ExpresionesWindow->resize(514, 321);
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
        botonLimpiar->setGeometry(QRect(10, 290, 101, 23));
        botonResolver = new QPushButton(ExpresionesWindow);
        botonResolver->setObjectName(QStringLiteral("botonResolver"));
        botonResolver->setGeometry(QRect(420, 290, 80, 23));
        textEditHist = new QTextEdit(ExpresionesWindow);
        textEditHist->setObjectName(QStringLiteral("textEditHist"));
        textEditHist->setEnabled(true);
        textEditHist->setGeometry(QRect(10, 50, 491, 201));
        textEditHist->setFocusPolicy(Qt::NoFocus);
        textEditHist->setReadOnly(true);
        lineEditExp = new QLineEdit(ExpresionesWindow);
        lineEditExp->setObjectName(QStringLiteral("lineEditExp"));
        lineEditExp->setGeometry(QRect(10, 260, 491, 23));

        retranslateUi(ExpresionesWindow);

        QMetaObject::connectSlotsByName(ExpresionesWindow);
    } // setupUi

    void retranslateUi(QWidget *ExpresionesWindow)
    {
        ExpresionesWindow->setWindowTitle(QApplication::translate("ExpresionesWindow", "Resoluci\303\263n de Expresiones Matem\303\241ticas | Proyecto EdD I", nullptr));
        label->setText(QApplication::translate("ExpresionesWindow", "Mafway Problem Solver", nullptr));
        botonLimpiar->setText(QApplication::translate("ExpresionesWindow", "Limpiar Todo", nullptr));
        botonResolver->setText(QApplication::translate("ExpresionesWindow", "Resolver", nullptr));
        textEditHist->setHtml(QApplication::translate("ExpresionesWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Bienvenido a Mafway</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Ingrese un problema abajo para comenzar.</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin"
                        "-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Operaciones Admitidas:</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Multiplicaci\303\263n (*) | Divisi\303\263n (/) | Suma (+) | Resta (-)</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Ejemplo:</span></p>\n"
"<p align=\"center\" style=\" margin-"
                        "top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">242+543-324/44+23</p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">Se sigue el orden est\303\241ndar de operaciones</span></p></body></html>", nullptr));
        textEditHist->setPlaceholderText(QApplication::translate("ExpresionesWindow", "Historial de Operaciones", nullptr));
        lineEditExp->setPlaceholderText(QApplication::translate("ExpresionesWindow", "Ingrese una Expresi\303\263n Matem\303\241tica para Resolver", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExpresionesWindow: public Ui_ExpresionesWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPRESIONESWINDOW_H
