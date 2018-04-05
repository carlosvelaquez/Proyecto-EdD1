#ifndef GRAPH_H
#define GRAPH_H

#include "vertex.h"

template <class T>
class Graph{

private:
  List<Vertex<T>*>* vertices;
  bool weighted;

public:
  Graph(){
    vertices = new List<Vertex<T>*>;
    weighted = false;
  }

  Graph(bool nWeighted){
    vertices = new List<Vertex<T>*>;
    weighted = nWeighted;
  }

  bool addVertex(T nData){
    return vertices->insert(new Vertex<T>(nData));
  }

  bool addVertex(Vertex<T>* nVertex){
    return vertices->insert(nVertex);
  }

  bool addEdge(Vertex<T>* vertex1, Vertex<T>* vertex2){
    if (vertex1 == vertex2) {
      return false;
    }else if (vertex1->addEdge(vertex2) && vertex2->addEdge(vertex1)) {
      return true;
    }

    return false;
  }

  bool addEdge(Vertex<T>* vertex1, Vertex<T>* vertex2, double cost){
    if (vertex1 == vertex2) {
      return false;
    }else if (vertex1->addEdge(vertex2, cost) && vertex2->addEdge(vertex1, cost)) {
      return true;
    }

    return false;
  }

  List<Vertex<T>*>* getVertices(){
    return vertices;
  }

  bool isWeighted(){
    return weighted;
  }


};

#endif /* end of include guard: GRAPH_H */
