/********************************************************************************
** Form generated from reading UI file 'laberintowindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_laberintowindow
{
public:
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QPushButton *pushbutton_next;
    QPushButton *pushButton_restart;
    QPushButton *pushbutton_load;
    QFrame *frame_2;

    void setupUi(QWidget *laberintowindow)
    {
        if (laberintowindow->objectName().isEmpty())
            laberintowindow->setObjectName(QStringLiteral("laberintowindow"));
        laberintowindow->resize(724, 227);
        frame = new QFrame(laberintowindow);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(30, 70, 181, 141));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushbutton_next = new QPushButton(frame);
        pushbutton_next->setObjectName(QStringLiteral("pushbutton_next"));

        verticalLayout->addWidget(pushbutton_next);

        pushButton_restart = new QPushButton(frame);
        pushButton_restart->setObjectName(QStringLiteral("pushButton_restart"));

        verticalLayout->addWidget(pushButton_restart);

        pushbutton_load = new QPushButton(laberintowindow);
        pushbutton_load->setObjectName(QStringLiteral("pushbutton_load"));
        pushbutton_load->setGeometry(QRect(30, 30, 80, 25));
        frame_2 = new QFrame(laberintowindow);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(220, 20, 491, 191));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);

        retranslateUi(laberintowindow);

        QMetaObject::connectSlotsByName(laberintowindow);
    } // setupUi

    void retranslateUi(QWidget *laberintowindow)
    {
        laberintowindow->setWindowTitle(QApplication::translate("laberintowindow", "Form", nullptr));
        pushbutton_next->setText(QApplication::translate("laberintowindow", "Avanzar", nullptr));
        pushButton_restart->setText(QApplication::translate("laberintowindow", "Reiniciar", nullptr));
        pushbutton_load->setText(QApplication::translate("laberintowindow", "Cargar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class laberintowindow: public Ui_laberintowindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LABERINTOWINDOW_H
