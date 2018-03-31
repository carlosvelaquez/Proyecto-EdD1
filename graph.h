#ifndef GRAPH_H
#define GRAPH_H

template <class T>
class Graph{

private:
  List<Vertex<T>*>* vertices;

public:
  Graph(){
    vertices = new List<Vertex<T>*>;
  }

  bool addVertex(T nData){
    vertices->insert(new Vertex<T>(nData));
  }

  bool addVertex(Vertex<T>* nVertex){
    vertices->insert(nVertex);
  }

  bool addEdge(Vertex<T>* vertex1, Vertex<T>* vertex2){
    if (vertex1->addEdge(vertex2) && vertex2->addEdge(vertex1)) {
      return true;
    }

    return false;
  }


};

#endif /* end of include guard: GRAPH_H */
