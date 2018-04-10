/********************************************************************************
** Form generated from reading UI file 'laberintowindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LABERINTOWINDOW_H
#define UI_LABERINTOWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_laberintowindow
{
public:
    QFrame *frame_2;
    QLabel *label_2;
    QFrame *frame_3;
    QPushButton *pushbutton_next;
    QPushButton *pushbutton_load;
    QFrame *Frame_Laberinto;

    void setupUi(QWidget *laberintowindow)
    {
        if (laberintowindow->objectName().isEmpty())
            laberintowindow->setObjectName(QStringLiteral("laberintowindow"));
        laberintowindow->resize(620, 719);
        laberintowindow->setStyleSheet(QLatin1String("QWidget{\n"
"	background-color:white;\n"
"}"));
        frame_2 = new QFrame(laberintowindow);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 621, 61));
        frame_2->setStyleSheet(QLatin1String("QFrame{\n"
"background-color:#FF9800;\n"
"}\n"
"\n"
"QLabel{\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton{\n"
"background-color: #F57C00;\n"
"color: white;\n"
"border: none;\n"
"font: 11pt \"Lato\";\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color:#E65100;\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 371, 31));
        QFont font;
        font.setFamily(QStringLiteral("Montserrat"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        frame_3 = new QFrame(laberintowindow);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(-1, 679, 621, 41));
        frame_3->setStyleSheet(QLatin1String("QFrame{\n"
"background-color:#FF9800;\n"
"}\n"
"\n"
"QLabel{\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton{\n"
"background-color: #F57C00;\n"
"color: white;\n"
"border: none;\n"
"font: 11pt \"Lato\";\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color:#E65100;\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        pushbutton_next = new QPushButton(frame_3);
        pushbutton_next->setObjectName(QStringLiteral("pushbutton_next"));
        pushbutton_next->setGeometry(QRect(480, 0, 141, 41));
        pushbutton_load = new QPushButton(frame_3);
        pushbutton_load->setObjectName(QStringLiteral("pushbutton_load"));
        pushbutton_load->setGeometry(QRect(0, 0, 131, 41));
        Frame_Laberinto = new QFrame(laberintowindow);
        Frame_Laberinto->setObjectName(QStringLiteral("Frame_Laberinto"));
        Frame_Laberinto->setGeometry(QRect(20, 80, 581, 581));
        Frame_Laberinto->setFrameShape(QFrame::StyledPanel);
        Frame_Laberinto->setFrameShadow(QFrame::Raised);

        retranslateUi(laberintowindow);

        QMetaObject::connectSlotsByName(laberintowindow);
    } // setupUi

    void retranslateUi(QWidget *laberintowindow)
    {
        laberintowindow->setWindowTitle(QApplication::translate("laberintowindow", "Form", Q_NULLPTR));
        label_2->setText(QApplication::translate("laberintowindow", "Laberinto con Backtracking", Q_NULLPTR));
        pushbutton_next->setText(QApplication::translate("laberintowindow", "Resolver Laberinto", Q_NULLPTR));
        pushbutton_load->setText(QApplication::translate("laberintowindow", "Cargar Laberinto", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class laberintowindow: public Ui_laberintowindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LABERINTOWINDOW_H
