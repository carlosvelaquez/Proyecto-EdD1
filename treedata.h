#ifndef TREEDATA_H
#define TREEDATA_H

#include <QChar>
#include <QString>
#include <string>

using namespace std;

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
    treedata(QString);
    void setType(int);
    int getFrecuency();
    int getType();

    QString getCode();
    void setCode(QString);
    QChar getChar();
    void setChar(QChar);

    operator string() const{
        string str = "";
        QString str2 = "";
        str2.append(Char);

        str += str2.toUtf8().constData();
        str += " | ";
        str += code.toUtf8().constData();
        str += " | ";
        str += to_string(frecuency);
      return str;
    }
};

#endif // TREEDATA_H
