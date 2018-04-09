#include "treedata.h"

treedata::treedata()
{
    frecuency = 0;
    type = -1;
}

treedata::treedata(int nFrecuency)
{
    frecuency = nFrecuency;
     type = -1;
}

treedata::treedata(QChar nChar, int nFrecuency, int nType){
    Char = nChar;
    frecuency = nFrecuency;
    type = nType;
}

treedata::treedata(QChar nChar, int nFrecuency){
    Char = nChar;
    frecuency = nFrecuency;
     type = -1;
}

treedata::treedata(QChar nChar, QString nCode){
    Char = nChar;
    code = nCode;
}

int treedata::getFrecuency(){
    return frecuency;
}

int treedata::getType(){
    return type;
}

QChar treedata::getChar(){
    return Char;
}

void treedata::setChar(QChar nChar){
    Char = nChar;
}
void treedata::setType(int nType){
    type = nType;
}

void treedata::setCode(QString nCode){
    code = nCode;
}

QString treedata::getCode(){
    return code;
}
