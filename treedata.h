#ifndef TREEDATA_H
#define TREEDATA_H

#include <QChar>
#include <QString>

class treedata
{

private:
    QChar Char;
    QString code;
    long int frecuency;
    int type; // 0 ó 1

public:
    treedata();
    treedata(int);
    treedata(QChar, QString);
    treedata(QChar,int);
    treedata(QChar,int,int);
    void setType(int);
    int getFrecuency();
    int getType();

    QString getCode();
    void setCode(QString);
    QChar getChar();
    void setChar(QChar);
};

#endif // TREEDATA_H
