/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCerrar;
    QAction *actionAcerca_de;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_9;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(616, 438);
        MainWindow->setStyleSheet(QLatin1String("QWidget{\n"
"	background-color: white;\n"
"	border: none;\n"
"}\n"
"\n"
"QPushButton{\n"
"	font: 11pt \"Lato\";\n"
"	color: white;\n"
"	background-color: black;\n"
"	text-align: center;\n"
"	padding: 10px;\n"
"	border-color: rgb(40, 67, 176);\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: gray;\n"
"}"));
        actionCerrar = new QAction(MainWindow);
        actionCerrar->setObjectName(QStringLiteral("actionCerrar"));
        actionAcerca_de = new QAction(MainWindow);
        actionAcerca_de->setObjectName(QStringLiteral("actionAcerca_de"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral(""));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 110, 271, 51));
        pushButton->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: #FFA000;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color:#FF6F00;\n"
"}"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 250, 271, 51));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: #4CAF50;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: rgb(64, 148, 67);\n"
"}"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(320, 110, 271, 51));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: #e53935;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: rgb(198, 53, 43);\n"
"}"));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 180, 271, 51));
        pushButton_4->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: #AFB42B;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color:#827717;\n"
"}"));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(320, 250, 271, 51));
        pushButton_5->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: #7B1FA2;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: #4A148C;\n"
"}"));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(320, 320, 271, 51));
        pushButton_6->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: #512DA8;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: #4527A0;\n"
"}"));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(320, 180, 271, 51));
        pushButton_7->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: #C2185B;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: #880E4F;\n"
"}"));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(20, 320, 271, 51));
        pushButton_8->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: #303F9F;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: #1A237E;\n"
"}"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 571, 41));
        QFont font;
        font.setFamily(QStringLiteral("Montserrat"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: #212121;"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 50, 591, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Open Sans"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setWeight(50);
        label_2->setFont(font1);
        label_2->setStyleSheet(QLatin1String("color: #757575;\n"
"text-align: center;"));
        label_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(200, 390, 201, 31));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "TDA Showcase | Men\303\272 Principal", nullptr));
        actionCerrar->setText(QApplication::translate("MainWindow", "Cerrar", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCerrar->setShortcut(QApplication::translate("MainWindow", "F4", nullptr));
#endif // QT_NO_SHORTCUT
        actionAcerca_de->setText(QApplication::translate("MainWindow", "Acerca de...", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Laberinto con Backtracking", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Evaluaci\303\263n por Desempe\303\261o", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Res. de Expresiones Matem\303\241ticas", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "Compresi\303\263n de Archivos de Texto", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "Determinar Grafos Bi-coloreables", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "Menor Costo - Algoritmo de Floyd", nullptr));
        pushButton_7->setText(QApplication::translate("MainWindow", "Menor Costo - Algoritmo de Dijkstra", nullptr));
        pushButton_8->setText(QApplication::translate("MainWindow", "\303\201rboles de Expansi\303\263n M\303\255nima", nullptr));
        label->setText(QApplication::translate("MainWindow", "TDA Showcase", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Proyecto de Estructuras de Datos 1 | By Carlos V.\302\262", nullptr));
        pushButton_9->setText(QApplication::translate("MainWindow", "Manual del Usuario", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
