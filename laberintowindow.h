#ifndef LABERINTOWINDOW_H
#define LABERINTOWINDOW_H

#include <QWidget>

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

private slots:
    void takefile();
    bool move();

private:
    Ui::laberintowindow *ui;
};

#endif // LABERINTOWINDOW_H
