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
    void simulation(char**,int,int);
    bool checkPosition(int,int,char**);

private slots:
    void takefile();
    bool move();

private:
    Ui::laberintowindow *ui;
    LabView* labView;
};

#endif // LABERINTOWINDOW_H
