#ifndef GRAPHFRAME_H
#define GRAPHFRAME_H

#include <QtGui>
#include <QFrame>
#include "graph.h"
#include "dragbutton.h"

class GraphFrame : public QFrame{

  Q_OBJECT

public:
  GraphFrame(QWidget *parent = Q_NULLPTR) : QFrame(parent){
    this->QFrame::setStyleSheet("QPushButton{ color:white; border-radius: 25px; } QFrame{border: 1px solid #C5C5C5;}");
  }

  virtual ~GraphFrame() {};
};


#endif
