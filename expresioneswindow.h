#ifndef EXPRESIONESWINDOW_H
#define EXPRESIONESWINDOW_H

#include <QWidget>
#include <QTextEdit>
#include <QScrollBar>
#include "expression.h"

namespace Ui {
class ExpresionesWindow;
}

class ExpresionesWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ExpresionesWindow(QWidget *parent = 0);
    ~ExpresionesWindow();

private slots:
    void on_botonLimpiar_clicked();

    void on_botonResolver_clicked();

private:
    Ui::ExpresionesWindow *ui;
};

#endif // EXPRESIONESWINDOW_H
