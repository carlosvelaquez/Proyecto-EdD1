#ifndef HUFFMANWINDOW_H
#define HUFFMANWINDOW_H

#include <QString>
#include <QWidget>
#include "queue.h"
#include "bitreenode.h"
#include "treedata.h"
#include "list.h"
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
    void compress(QString);
    void sort(Queue<bitreenode<treedata>*>*);
    void decode(QString,bitreenode<treedata>*);
    void filltext();
    Queue<bitreenode<treedata>*>* fillList(QString*);
    bitreenode<treedata>* createTree(Queue<bitreenode<treedata>*>*);

private slots:

    void loadFile();
    void compressWord();

private:
    Ui::huffmanwindow *ui;
    QString textoGenerado;
    QString textoObtenido;
    List<treedata>* codigos;
};

#endif // HUFFMANWINDOW_H
