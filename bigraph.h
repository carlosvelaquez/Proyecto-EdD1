#ifndef BIGRAPH_H
#define BIGRAPH_H

template <class T>
class Bigraph : Graph{
  bool addEdge(Vertex<T>* vertex1, Vertex<T>* vertex2){
    if (vertex1->addEdge(vertex2)) {
      return true;
    }

    return false;
  }
};

#endif /* end of include guard: BIGRAPH_H */
