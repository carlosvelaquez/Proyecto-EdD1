/********************************************************************************
** Form generated from reading UI file 'huffmanwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HUFFMANWINDOW_H
#define UI_HUFFMANWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_huffmanwindow
{
public:
    QFrame *frame;
    QPushButton *pushbutton_load;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton_compress;
    QFrame *frame_3;
    QTreeWidget *treeWidget;

    void setupUi(QWidget *huffmanwindow)
    {
        if (huffmanwindow->objectName().isEmpty())
            huffmanwindow->setObjectName(QStringLiteral("huffmanwindow"));
        huffmanwindow->resize(640, 402);
        frame = new QFrame(huffmanwindow);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 641, 401));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushbutton_load = new QPushButton(frame);
        pushbutton_load->setObjectName(QStringLiteral("pushbutton_load"));
        pushbutton_load->setGeometry(QRect(20, 30, 81, 31));
        pushbutton_load->setStyleSheet(QLatin1String("background-color: rgb(32, 74, 135);\n"
"font: 75 9pt \"Waree\";"));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(110, 30, 511, 45));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit = new QLineEdit(frame_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton_compress = new QPushButton(frame_2);
        pushButton_compress->setObjectName(QStringLiteral("pushButton_compress"));

        horizontalLayout->addWidget(pushButton_compress);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(20, 90, 601, 291));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        treeWidget = new QTreeWidget(frame_3);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(10, 10, 581, 271));

        retranslateUi(huffmanwindow);

        QMetaObject::connectSlotsByName(huffmanwindow);
    } // setupUi

    void retranslateUi(QWidget *huffmanwindow)
    {
        huffmanwindow->setWindowTitle(QApplication::translate("huffmanwindow", "Form", nullptr));
        pushbutton_load->setText(QApplication::translate("huffmanwindow", "Cargar", nullptr));
        pushButton_compress->setText(QApplication::translate("huffmanwindow", "comprimir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class huffmanwindow: public Ui_huffmanwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HUFFMANWINDOW_H
