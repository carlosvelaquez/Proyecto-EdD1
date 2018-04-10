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
    QLabel *label;
    QPushButton *pushButton_Elegir;
    QFrame *frame_3;

    void setupUi(QWidget *dijkstrawindow)
    {
        if (dijkstrawindow->objectName().isEmpty())
            dijkstrawindow->setObjectName(QStringLiteral("dijkstrawindow"));
        dijkstrawindow->resize(681, 375);
        dijkstrawindow->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame = new QFrame(dijkstrawindow);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 681, 71));
        frame->setStyleSheet(QStringLiteral("background-color: #C2185B;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(550, 0, 131, 71));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(13, 16, 491, 41));
        label_2->setStyleSheet(QLatin1String("font: 23pt \"Noto Sans\";\n"
""));
        frame_2 = new QFrame(dijkstrawindow);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(500, 130, 171, 121));
        frame_2->setStyleSheet(QStringLiteral("background-color: #C2185B;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        comboBox = new QComboBox(frame_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 40, 151, 25));
        label = new QLabel(frame_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 54, 17));
        pushButton_Elegir = new QPushButton(frame_2);
        pushButton_Elegir->setObjectName(QStringLiteral("pushButton_Elegir"));
        pushButton_Elegir->setGeometry(QRect(10, 80, 80, 25));
        frame_3 = new QFrame(dijkstrawindow);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(9, 79, 471, 281));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);

        retranslateUi(dijkstrawindow);

        QMetaObject::connectSlotsByName(dijkstrawindow);
    } // setupUi

    void retranslateUi(QWidget *dijkstrawindow)
    {
        dijkstrawindow->setWindowTitle(QApplication::translate("dijkstrawindow", "Form", nullptr));
        pushButton->setText(QApplication::translate("dijkstrawindow", "Buscar", nullptr));
        label_2->setText(QApplication::translate("dijkstrawindow", "Costo Min. Algoritmo de Dijkstra", nullptr));
        label->setText(QApplication::translate("dijkstrawindow", "Vertices", nullptr));
        pushButton_Elegir->setText(QApplication::translate("dijkstrawindow", "Elergir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dijkstrawindow: public Ui_dijkstrawindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIJKSTRAWINDOW_H
