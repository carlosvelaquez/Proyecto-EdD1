#ifndef GRAPHVIEW_H
#define GRAPHVIEW_H

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

template <class T>
class GraphView : public GraphFrame{

protected:
  Graph<T>* graph;

  void paintEvent(QPaintEvent* e){
    QFrame::paintEvent(e);
    QPainter painter(this);
    painter.setPen(QPen(QColor("#212121"), 2, Qt::SolidLine, Qt::RoundCap));


    List<Vertex<string>*>* vertices = graph->getVertices();

    for (int i = 1; i <= vertices->size; i++) {
      Vertex<string>* vertex = vertices->get(i);
      List<Vertex<string>*>* neighbors = vertex->neighbors();


      for (int i = 1; i <= neighbors->size; i++) {
        painter.drawLine((vertex->pos.x() + 25), (vertex->pos.y() + 25), (neighbors->get(i)->pos.x() + 25), (neighbors->get(i)->pos.y() + 25));
      }
    }
  }

public:
  GraphView<T>(QWidget *parent = Q_NULLPTR) : GraphFrame(parent){
    graph = new Graph<T>();
  }

  GraphView<T>(Graph<T>* nGraph, QWidget *parent = Q_NULLPTR) : GraphFrame(parent){
    graph = nGraph;
  }

  Graph<T>* getGraph(){
    return graph;
  }

  void setGraph(Graph<T>* nGraph){
    graph = nGraph;
  }

  void refresh(){
    while (QWidget* w = findChild<QWidget*>()) {
      delete w;
    }

    List<Vertex<string>*>* vertices = graph->getVertices();

    for (int i = 1; i <= vertices->size; i++) {
      Vertex<string>* current = vertices->get(i);
      DragButton* db = new DragButton(current, this);
      db->moveToPosition();
      db->show();
    }

    update();
  }

};

#endif /* end of include guard: GRAPHVIEW_H */
