#ifndef TREEDATA_H
#define TREEDATA_H

#include <QChar>

class treedata
{

private:
    QChar Char;
    long int frecuency;
    int type; // 0 ó 1

public:
    treedata();
    treedata(int);
    treedata(QChar,int);
    treedata(QChar,int,int);
    int getFrecuency();
    int getType();
    QChar* getChar();
};

#endif // TREEDATA_H
