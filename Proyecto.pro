#-------------------------------------------------
#
# Project created by QtCreator 2018-03-08T19:48:44
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Proyecto
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    empleado.cpp \
    desempenowindow.cpp \
    expresioneswindow.cpp \
    expression.cpp \
    bicoloreableswindow.cpp \
    mstwindow.cpp \
    laberintowindow.cpp \
    huffmanwindow.cpp \
    treedata.cpp \
    labview.cpp \
    floydwindow.cpp \
    dijkstrawindow.cpp

HEADERS += \
        mainwindow.h \
    arbol.h \
    arbol.h \
    treenode.h \
    arbol.h \
    empleado.h \
    treenode.h \
    desempenowindow.h \
    expresioneswindow.h \
    list.h \
    node.h \
    expression.h \
    treenode.h \
    tree.h \
    queue.h \
    bicoloreableswindow.h \
    dragbutton.h \
    graphview.h \
    mstwindow.h \
    graphframe.h \
    graph.h \
    vertex.h \
    laberintowindow.h \
    huffmanwindow.h \
    linkedstack.h \
    stack.h \
    bitreenode.h \
    treedata.h \
    laberintodata.h \
    labview.h \
    floydwindow.h \
    dijkstrawindow.h

FORMS += \
        mainwindow.ui \
    desempenowindow.ui \
    expresioneswindow.ui \
    bicoloreableswindow.ui \
    mstwindow.ui \
    laberintowindow.ui \
    huffmanwindow.ui \
    dijkstrawindow.ui \
    floydwindow.ui

CONFIG += c++11
