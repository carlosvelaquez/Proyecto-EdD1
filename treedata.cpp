#include "treedata.h"

treedata::treedata()
{

}

treedata::treedata(QChar nChar, int nFrecuency, int nType){
    Char = nChar;
    frecuency = nFrecuency;
    type = nType;
}

int treedata::getFrecuency(){
    return frecuency;
}

int treedata::getType(){
    return type;
}

QChar* treedata::getChar(){
    return &Char;
}
