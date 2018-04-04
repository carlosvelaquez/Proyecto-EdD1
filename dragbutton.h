#ifndef DRAGBUTTON_H
#define DRAGBUTTON_H

#include <QtGui>
#include <QPushButton>
#include "vertex.h"

class DragButton : public QPushButton {

  Q_OBJECT

protected:
  bool moving;
  QPoint offset;

public:
  Vertex<string>* vertex;
  
  DragButton(QWidget *parent = Q_NULLPTR){
    setText("DragButton");
    vertex = 0;
    setMouseTracking(true);
    moving = false;
    setFixedSize(50,50);
  }

  DragButton(Vertex<string>* nVertex, QWidget *parent = Q_NULLPTR){
    vertex = nVertex;
    setText(vertex->getDisplayName().c_str());
    setMouseTracking(true);
    moving = false;
    setFixedSize(50,50);
  }

  DragButton(string name, QWidget *parent = Q_NULLPTR){
    setText(name.c_str());
    vertex = new Vertex<string>("white", name);
    setMouseTracking(true);
    moving = false;
    setFixedSize(50,50);
  }

  void mousePressEvent(QMouseEvent* e){
    moving = true;
    offset = e->pos();
  }

  void mouseMoveEvent(QMouseEvent* e){
    if (moving) {
      //move(e->pos());
      if(e->buttons() & Qt::LeftButton){
          this->move(mapToParent(e->pos() - offset));
      }
    }
  }

  void mouseReleaseEvent(){
    moving = false;
  }

  virtual ~DragButton() {};
};

#endif // DRAGBUTTON_H
