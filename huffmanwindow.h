#ifndef HUFFMANWINDOW_H
#define HUFFMANWINDOW_H

#include <QString>
#include <QWidget>
#include "stack.h"

namespace Ui {
class huffmanwindow;
}

class huffmanwindow : public QWidget
{
    Q_OBJECT

public:
    explicit huffmanwindow(QWidget *parent = 0);
    ~huffmanwindow();
    void createTreeWidget();
    void compress(QString*);

private slots:

    void loadFile();
    void compressWord();

private:
    Ui::huffmanwindow *ui;
};

#endif // HUFFMANWINDOW_H
