#include "treedata.h"

treedata::treedata()
{

}

treedata::treedata(int nFrecuency)
{
    frecuency = nFrecuency;
}

treedata::treedata(QChar nChar, int nFrecuency, int nType){
    Char = nChar;
    frecuency = nFrecuency;
    type = nType;
}

treedata::treedata(QChar nChar, int nFrecuency){
    Char = nChar;
    frecuency = nFrecuency;
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
