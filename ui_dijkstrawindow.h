/********************************************************************************
** Form generated from reading UI file 'dijkstrawindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIJKSTRAWINDOW_H
#define UI_DIJKSTRAWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dijkstrawindow
{
public:
    QFrame *frame;
    QPushButton *pushButton;
    QLabel *label_2;
    QFrame *frame_2;
    QComboBox *comboBox;
    QPushButton *pushButton_Elegir;
    QLabel *resultadoLabel;
    QTextEdit *textEdit;

    void setupUi(QWidget *dijkstrawindow)
    {
        if (dijkstrawindow->objectName().isEmpty())
            dijkstrawindow->setObjectName(QStringLiteral("dijkstrawindow"));
        dijkstrawindow->resize(541, 379);
        dijkstrawindow->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame = new QFrame(dijkstrawindow);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 541, 61));
        frame->setStyleSheet(QLatin1String("QFrame{\n"
"background-color: #E91E63;\n"
"}\n"
"\n"
"QLabel{\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton{\n"
"background-color:#C2185B;\n"
"color: white;\n"
"border: none;\n"
"font: 11pt \"Lato\";\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: #880E4F;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(410, 0, 131, 61));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 381, 31));
        QFont font;
        font.setFamily(QStringLiteral("Montserrat"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        frame_2 = new QFrame(dijkstrawindow);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(0, 330, 541, 51));
        frame_2->setStyleSheet(QLatin1String("QFrame{\n"
"background-color: #E91E63;\n"
"}\n"
"\n"
"QLabel{\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton{\n"
"background-color:#C2185B;\n"
"color: white;\n"
"border: none;\n"
"font: 11pt \"Lato\";\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: #880E4F;\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        comboBox = new QComboBox(frame_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(200, 10, 151, 25));
        comboBox->setStyleSheet(QLatin1String("background-color: white;\n"
"color: black;"));
        pushButton_Elegir = new QPushButton(frame_2);
        pushButton_Elegir->setObjectName(QStringLiteral("pushButton_Elegir"));
        pushButton_Elegir->setGeometry(QRect(390, 0, 151, 51));
        resultadoLabel = new QLabel(frame_2);
        resultadoLabel->setObjectName(QStringLiteral("resultadoLabel"));
        resultadoLabel->setGeometry(QRect(10, 10, 171, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Montserrat"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        resultadoLabel->setFont(font1);
        textEdit = new QTextEdit(dijkstrawindow);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(13, 69, 511, 251));

        retranslateUi(dijkstrawindow);

        QMetaObject::connectSlotsByName(dijkstrawindow);
    } // setupUi

    void retranslateUi(QWidget *dijkstrawindow)
    {
        dijkstrawindow->setWindowTitle(QApplication::translate("dijkstrawindow", "Menor Costo - Dijkstra | Proyecto EdD I", nullptr));
        pushButton->setText(QApplication::translate("dijkstrawindow", "Cargar Grafo", nullptr));
        label_2->setText(QApplication::translate("dijkstrawindow", "Costo M\303\255nimo - Dijkstra", nullptr));
        pushButton_Elegir->setText(QApplication::translate("dijkstrawindow", "Encontrar Rutas", nullptr));
        resultadoLabel->setText(QApplication::translate("dijkstrawindow", "Seleccionar V\303\251rtice", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dijkstrawindow: public Ui_dijkstrawindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIJKSTRAWINDOW_H
