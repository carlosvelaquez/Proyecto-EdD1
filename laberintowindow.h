#ifndef LABERINTOWINDOW_H
#define LABERINTOWINDOW_H

#include <QWidget>
#include <QFile>
#include <QString>
#include <QFileDialog>
#include <QTextStream>
#include "linkedstack.h"
#include "laberintodata.h"

#include "labview.h"
#include "node.h"

namespace Ui {
class laberintowindow;
}

class laberintowindow : public QWidget
{
    Q_OBJECT

public:
    explicit laberintowindow(QWidget *parent = 0);
    ~laberintowindow();
    char** createMatrix(int,int);
    void clearMatrix(char**,int);
    void simulation(int,int);

    void printMatrix(char**,int,int);

    void setScreen(char**,int,int);
    void refreshLabel(char**,int,int);

private slots:
    void takefile();
    bool move();

    void on_pushbutton_next_clicked();

private:
    Ui::laberintowindow *ui;
    LabView* labView;
    char** laberinto;
    int fil, col;
};

#endif // LABERINTOWINDOW_H
