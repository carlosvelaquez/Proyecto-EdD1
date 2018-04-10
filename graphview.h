#ifndef GRAPHVIEW_H
#define GRAPHVIEW_H

#include "graphframe.h"


template <class T>
class GraphView : public GraphFrame{

protected:
  Graph<T>* graph;

  void paintEvent(QPaintEvent* e){
    QFrame::paintEvent(e);
    QPainter painter(this);

    QPen pen(Qt::black, 4, Qt::SolidLine, Qt::RoundCap);
    QPen pen2(Qt::black, 4, Qt::SolidLine, Qt::RoundCap);
    pen.setColor(QColor("#AFBEFF"));
    pen2.setColor(QColor("#212121"));

    painter.setPen(pen);

    if (graph != 0) {
      if (graph->size() > 0) {
        List<Vertex<string>*>* vertices = graph->getVertices();

        for (int i = 1; i <= vertices->size; i++) {
          Vertex<string>* vertex = vertices->get(i);
          List<Vertex<string>*>* neighbors = vertex->neighbors();
          List<double>* costs = vertex->getCosts();

          for (int j = 1; j <= neighbors->size; j++) {
            int x1 = vertex->pos.x() + 25;
            int y1 = vertex->pos.y() + 25;
            int x2 = neighbors->get(j)->pos.x() + 25;
            int y2 = neighbors->get(j)->pos.y() + 25;

            painter.drawLine(x1, y1, x2, y2);

            if (graph->isWeighted()) {
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

              painter.setPen(pen2);
              painter.drawText(x3, y3, res.c_str());
              painter.setPen(pen);
            }
          }
        }
      }else{
        pen2.setColor(QColor("#9E9E9E"));
        painter.setPen(pen2);
        painter.drawText((width()/2) - 45, (height()/2), "Nada que mostrar");
      }
    }else{
      pen2.setColor(QColor("#9E9E9E"));
      painter.setPen(pen2);
      painter.drawText((width()/2) - 45, (height()/2), "Nada que mostrar");
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

    if (graph != 0) {
      List<Vertex<string>*>* vertices = graph->getVertices();

      for (int i = 1; i <= vertices->size; i++) {
        Vertex<string>* current = vertices->get(i);
        DragButton* db = new DragButton(current, this);
        db->moveToPosition();
        db->show();
      }

      update();
    }
  }

};


#endif /* end of include guard: GRAPHVIEW_H */
