#ifndef EDGE_H
#define EDGE_H

#include "vertex.h"

template <class T>
class Edge{
protected:
  double cost;
  Vertex<T>* vertex;

public:
  Edge<T>(Vertex<T>* v){
    vertex = v;
    cost = 0;
  }

  Edge<T>(Vertex<T>* v, bool nCost){
    vertex = v;
    cost = nCost;
  }

  double getCost(){
    return cost;
  }

  Vertex<T>* getVertex(){
    return vertex;
  }

};

#endif /* end of include guard: EDGE_H */
