#ifndef DIGRAPH_H
#define DIGRAPH_H

template <class T>
class Digraph : public Graph{

public:
  Digraph(){
    vertices = new List<Vertex<T>*>;
  }

  bool addEdge(Vertex<T>* vertex1, Vertex<T>* vertex2){
    if (vertex1->addEdge(vertex2)) {
      return true;
    }

    return false;
  }
};

#endif /* end of include guard: DIGRAPH_H */
