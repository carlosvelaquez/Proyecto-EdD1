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
  QWidget* parentFrame = 0;


public:
  Vertex<string>* vertex;

  DragButton(QWidget *parent = Q_NULLPTR) : QPushButton(parent) {
    parentFrame = parent;
    setText("DragButton");
    vertex = 0;
    setMouseTracking(true);
    moving = false;
    setFixedSize(50,50);
    refreshColor();
  }

  DragButton(Vertex<string>* nVertex, QWidget *parent = Q_NULLPTR) : QPushButton(parent) {
    parentFrame = parent;
    vertex = nVertex;
    setText(vertex->getDisplayName().c_str());
    setMouseTracking(true);
    moving = false;
    setFixedSize(50,50);
    refreshColor();
  }

  DragButton(string name, QWidget *parent = Q_NULLPTR) : QPushButton(parent) {
    parentFrame = parent;
    setText(name.c_str());
    vertex = new Vertex<string>("#7512EA", name);
    setMouseTracking(true);
    moving = false;
    setFixedSize(50,50);
    refreshColor();
  }

  void mousePressEvent(QMouseEvent* e){
    moving = true;
    offset = e->pos();
  }

  void mouseMoveEvent(QMouseEvent* e){
    if (moving) {
      if (e->buttons() & Qt::LeftButton){
        QPoint q = mapToParent(e->pos() - offset);
          this->move(q);
          vertex->pos = q;

          if (parentFrame != Q_NULLPTR && parentFrame != 0) {
            parentFrame->update();
          }
      }
    }
  }

  void mouseReleaseEvent(){
    moving = false;
  }

  QPoint getPosition(){
    return vertex->pos;
  }

  void moveToPosition(){
    move(getPosition());
  }

  void refreshColor(){
    string command = "background-color:";
    command += vertex->color;
    command += ";";
    this->QPushButton::setStyleSheet(command.c_str());
    update();
  }

  virtual ~DragButton() {};
};

#endif // DRAGBUTTON_H
