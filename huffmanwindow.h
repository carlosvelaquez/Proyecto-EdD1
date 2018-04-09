#ifndef HUFFMANWINDOW_H
#define HUFFMANWINDOW_H

#include <QString>
#include <QWidget>
#include "queue.h"
#include "bitreenode.h"
#include <vector>
#include "treedata.h"

using namespace std;

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
    void sort(Queue<bitreenode<treedata>*>*);
    void decode(QString,bitreenode<treedata>*);

    Queue<bitreenode<treedata>*>* fillList(QString*);
    bitreenode<treedata>* createTree(Queue<bitreenode<treedata>*>*);

private slots:

    void loadFile();
    void compressWord();

private:
    Ui::huffmanwindow *ui;
};

#endif // HUFFMANWINDOW_H
