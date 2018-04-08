#ifndef DIGRAPH_H
#define DIGRAPH_H

template <class T>
class Digraph : public Graph{

public:
  const int DIJKSTRA = 0;
  const int FLOYD = 1;

  Digraph() : Graph(){}
  Digraph(bool nWeighted) : Graph(nWeighted){}

  bool addEdge(Vertex<T>* vertex1, Vertex<T>* vertex2){
    if (vertex1 == vertex2) {
      return false;
    }else if (vertex1->addEdge(vertex2)) {
      return true;
    }

    return false;
  }

  bool addEdge(Vertex<T>* vertex1, Vertex<T>* vertex2, double cost){
    if (vertex1 == vertex2) {
      return false;
    }else if (vertex1->addEdge(vertex2, cost)) {
      return true;
    }

    return false;
  }
};

#endif /* end of include guard: DIGRAPH_H */
