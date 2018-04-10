#ifndef VERTEX_H
#define VERTEX_H

#include <string>
#include <QPoint>
#include <QColor>

#include "list.h"

using namespace std;

template <class T>
class Vertex{

protected:
  int distancia;
  Vertex<T>* vertexAnterior;
  T data;
  bool check;
  List<Vertex<T>*>* edges;
  List<double>* costs;
  string displayName;

public:
  QPoint pos;
  string color;

  Vertex(Vertex<T>* v){
    pos = v->pos;
    data = v->getData();
    edges = new List<Vertex<T>*>();
    costs = new List<double>();
    displayName = v->getDisplayName();
    color = v->color;
    check = false;
  }

  Vertex(T nData){
    pos = QPoint(25,25);
    data = nData;
    edges = new List<Vertex<T>*>();
    costs = new List<double>();
    displayName = "Vertex";
    color = "#7512EA";
    check = false;
  }

  Vertex(T nData, string nDisplay){
    pos = QPoint(25,25);
    data = nData;
    edges = new List<Vertex<T>*>();
    costs = new List<double>();
    displayName = nDisplay;
    color = "#7512EA";
    check = false;
  }

  List<Vertex<T>*>* neighbors(){
    return edges;
  }

  int getDistancia(){
      return distancia;
  }

  void setDistancia(int n){
      distancia = n;
  }

  void setPrevio(Vertex<T>* prev){
    vertexAnterior = prev;
  }

  Vertex<T>* getPrevio(){
      return vertexAnterior;
  }

  bool adjacent(Vertex<T>* nVertex){
    if (neighbors()->contains(nVertex)) {
      return true;
    }

    return false;
  }

  bool addEdge(Vertex<T>* nVertex){
    if (!adjacent(nVertex)) {
      if (edges->insert(nVertex)) {
        costs->insert(0);
        return true;
      }

      return false;
    }

    return false;
  }

  bool addEdge(Vertex<T>* nVertex, double cost){
    if (!adjacent(nVertex)) {
      if (edges->insert(nVertex)) {
        costs->insert(cost);
        return true;
      }

      return false;
    }

    return false;
  }

  bool removeEdge(Vertex<T>* nVertex){
    if (adjacent(nVertex)) {
      for (int i = 1; i <= edges->size; i++) {
        if (edges->get(i) == nVertex) {
          edges->remove(i);
          costs->remove(i);
          return true;
        };
      }
    }

    return false;
  }

  void skim(){
    edges->remove(edges->size);
    costs->remove(costs->size);
  }

  void setCheck(bool nCheck){
    check = nCheck;
  }

  bool isCheck(){
    return check;
  }

  T getData(){
    return data;
  }

  void setData(T nData){
    data = nData;
  }

  string getDisplayName(){
    return displayName;
  }

  void setDisplayName(string nDisplay){
    displayName = nDisplay;
  }

  List<double>* getCosts(){
    return costs;
  }

  List<Vertex<T>*>* getEdges(){
    return edges;
  }
};

#endif /* end of include guard: VERTEX_H */
