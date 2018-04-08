#ifndef DIGRAPHVIEW_H
#define DIGRAPHVIEW_H

#include "graphframe.h"
#include "digraph.h"

template <class T>
class DigraphView : public GraphFrame{
protected:
  Digraph<T>* graph;

  void paintEvent(QPaintEvent* e){
    QFrame::paintEvent(e);
    QPainter painter(this);

    QPen pen(Qt::black, 4, Qt::SolidLine, Qt::RoundCap);
    QPen pen2(Qt::black, 4, Qt::SolidLine, Qt::RoundCap);
    pen.setColor(QColor("#AFBEFF"));
    pen2.setColor(QColor("#212121"));

    List<Vertex<string>*>* vertices = graph->getVertices();

    for (int i = 1; i <= vertices->size; i++) {
      Vertex<string>* vertex = vertices->get(i);
      List<Vertex<string>*>* neighbors = vertex->neighbors();

      for (int j = 1; i <= neighbors->size; i++) {
        int x1 = vertex->pos.x() + 25;
        int y1 = vertex->pos.y() + 25;
        int x2 = neighbors->get(j)->pos.x() + 25;
        int y2 = neighbors->get(j)->pos.y() + 25;

        int x3 = (x1+x2)/2 + 15;
        int y3 = ((y1+y2)/2) + 15;

        string res = to_string(costs->get(j));
        int z = res.length() - 1;

        while (res[z] == '0') {
          res = res.substr(0, z);
          z = res.length() - 1;
        }

        if (res[z] == '.') {
          res = res.substr(0, z);
        }

        painter.setPen(pen);
        painter.drawLine(x1, y1, x2, y2);

        painter.setPen(pen2);
        painter.drawText(x3, y3, res.c_str());
      }
    }
  }

public:
  DigraphView<T>(QWidget *parent = Q_NULLPTR) : GraphFrame(parent){
    graph = new Digraph<T>();
  }

  DigraphView<T>(Graph<T>* nGraph, QWidget *parent = Q_NULLPTR) : GraphFrame(parent){
    graph = nGraph;
  }

  Digraph<T>* getGraph(){
    return graph;
  }

  void setGraph(Digraph<T>* nGraph){
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

#endif /* end of include guard: DIGRAPHVIEW_H */
