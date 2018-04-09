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
#include <QtWidgets/QFrame>
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
    QTextEdit *textEditHist;
    QFrame *frame;
    QLineEdit *lineEditExp;
    QPushButton *botonResolver;
    QPushButton *botonLimpiar;
    QFrame *frame_2;
    QLabel *label;

    void setupUi(QWidget *ExpresionesWindow)
    {
        if (ExpresionesWindow->objectName().isEmpty())
            ExpresionesWindow->setObjectName(QStringLiteral("ExpresionesWindow"));
        ExpresionesWindow->resize(651, 410);
        ExpresionesWindow->setStyleSheet(QLatin1String("QWidget{\n"
"background-color: white;\n"
"}"));
        textEditHist = new QTextEdit(ExpresionesWindow);
        textEditHist->setObjectName(QStringLiteral("textEditHist"));
        textEditHist->setEnabled(true);
        textEditHist->setGeometry(QRect(10, 70, 621, 251));
        QFont font;
        font.setPointSize(11);
        textEditHist->setFont(font);
        textEditHist->setFocusPolicy(Qt::NoFocus);
        textEditHist->setReadOnly(true);
        frame = new QFrame(ExpresionesWindow);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 330, 651, 81));
        frame->setStyleSheet(QLatin1String("QFrame{\n"
"background-color: #e53935;\n"
"}\n"
"\n"
"QLabel{\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton{\n"
"background-color: rgb(204, 55, 44);\n"
"color: white;\n"
"border: none;\n"
"font: 11pt \"Lato\";\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(181, 48, 38);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lineEditExp = new QLineEdit(frame);
        lineEditExp->setObjectName(QStringLiteral("lineEditExp"));
        lineEditExp->setGeometry(QRect(20, 20, 491, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Consolas"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        lineEditExp->setFont(font1);
        botonResolver = new QPushButton(frame);
        botonResolver->setObjectName(QStringLiteral("botonResolver"));
        botonResolver->setGeometry(QRect(530, 0, 121, 51));
        botonLimpiar = new QPushButton(frame);
        botonLimpiar->setObjectName(QStringLiteral("botonLimpiar"));
        botonLimpiar->setGeometry(QRect(530, 50, 121, 31));
        frame_2 = new QFrame(ExpresionesWindow);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 651, 61));
        frame_2->setStyleSheet(QLatin1String("QFrame{\n"
"background-color: #e53935;\n"
"}\n"
"\n"
"QLabel{\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton{\n"
"background-color: rgb(204, 55, 44);\n"
"color: white;\n"
"border: none;\n"
"font: 11pt \"Lato\";\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(181, 48, 38);\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 501, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Montserrat"));
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);

        retranslateUi(ExpresionesWindow);

        QMetaObject::connectSlotsByName(ExpresionesWindow);
    } // setupUi

    void retranslateUi(QWidget *ExpresionesWindow)
    {
        ExpresionesWindow->setWindowTitle(QApplication::translate("ExpresionesWindow", "Resoluci\303\263n de Expresiones Matem\303\241ticas | Proyecto EdD I", nullptr));
        textEditHist->setHtml(QApplication::translate("ExpresionesWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Bienvenido a Mafway</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Ingrese un problema abajo para comenzar.</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-ty"
                        "pe:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Operaciones Admitidas:</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Multiplicaci\303\263n (*) | Divisi\303\263n (/) | Suma (+) | Resta (-)</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Ejemplo:</span></p>\n"
"<p align=\"center\" "
                        "style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">242+543-324/44+23</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-style:italic;\">Se sigue el orden est\303\241ndar de operaciones</span></p></body></html>", nullptr));
        textEditHist->setPlaceholderText(QApplication::translate("ExpresionesWindow", "Historial de Operaciones", nullptr));
        lineEditExp->setText(QString());
        lineEditExp->setPlaceholderText(QApplication::translate("ExpresionesWindow", "Ingrese una Expresi\303\263n Matem\303\241tica para Resolver", nullptr));
        botonResolver->setText(QApplication::translate("ExpresionesWindow", "Resolver", nullptr));
        botonLimpiar->setText(QApplication::translate("ExpresionesWindow", "Limpiar Todo", nullptr));
        label->setText(QApplication::translate("ExpresionesWindow", "Mafway Problem Solver", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExpresionesWindow: public Ui_ExpresionesWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPRESIONESWINDOW_H
