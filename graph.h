#ifndef GRAPH_H
#define GRAPH_H

#include "vertex.h"

template <class T>
class Graph{

private:
  List<Vertex<T>*>* vertices;
  bool weighted;

public:
  const string color1 = "#f44336";
  const string color2 = "#3F51B5";

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
    if (!vertices->contains(nVertex)) {
      return vertices->insert(nVertex);
    }

    return false;
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

  bool removeEdge(Vertex<T>* vertex1, Vertex<T>* vertex2){
    if (vertices->contains(vertex1) && vertices->contains(vertex2)) {
      if (vertex1->adjacent(vertex2)) {
        vertex1->removeEdge(vertex2);
      }

      if (vertex2->adjacent(vertex1)) {
        vertex2->removeEdge(vertex1);
      }

      return true;
    }

    return false;
  }

  List<Vertex<T>*>* getVertices(){
    return vertices;
  }

  int getNodeCount(){
    return vertices->size;
  }

  bool isWeighted(){
    return weighted;
  }

  bool hasCycles(){
    if (vertices->size > 0) {
      return searchCycles(new List<Vertex<T>*>(), vertices->get(1), 0);
    }else{
      return false;
    }
  }

  bool searchCycles(List<Vertex<T>*>* visited, Vertex<T>* current, Vertex<T>* exclude){
    if (visited->contains(current)) {
      return true;
    }else{
      visited->insert(current);
      List<Vertex<T>*>* edges = current->getEdges();

      for (int i = 1; i <= edges->size; i++) {
        if (edges->get(i) != exclude) {
          if (searchCycles(visited, edges->get(i), current)) {
            return true;
          }
        }
      }

      return false;
    }
  }

  Graph<T>* genMST(){
    struct Edge{
      Vertex<T>* v1;
      Vertex<T>* v2;
      double cost;

      bool operator==(Edge ed){
        if (ed.v1 == v1 && ed.v2 == v2 && ed.cost == cost) {
          return true;
        }else if(ed.v1 == v2 && ed.v1 == v2 && ed.cost == cost){
          return true;
        }else{
          return false;
        }
      }
    };

    List<Edge> edges;

    for (int i = 1; i <= vertices->size; i++) {
      List<Vertex<T>*>* neighbors = vertices->get(i)->neighbors();
      List<double>* costs = vertices->get(i)->getCosts();

      for (int j = 1; j <= neighbors->size; j++) {
        Edge ed;
        ed.v1 = vertices->get(i);
        ed.v2 = neighbors->get(j);
        ed.cost = costs->get(j);

        if (!edges.contains(ed)) {
          edges.insert(ed);
        }
      }
    }

    bool sort = true;

    while (sort) {
      sort = false;

      for (int i = 1; i < edges.size; i++) {
        double c1 = edges.get(i).cost;
        double c2 = edges.get(i+1).cost;

        if (c2 < c1) {
          sort = true;
          edges.swap(i, i+1);
        }
      }
    }

    Graph<T>* mst = new Graph<T>();
    List<Vertex<T>*>* vert = new List<Vertex<T>*>();

    for (int i = 1; i <= vertices->size; i++) {
      vert->insert(new Vertex<T>(vertices->get(i)));
    }

    for (int i = 1; i <= edges.size; i++) {
      Vertex<T>* v1 = vert->get(vertices->indexOf(edges.get(i).v1));
      Vertex<T>* v2 = vert->get(vertices->indexOf(edges.get(i).v2));

      double cost = edges.get(i).cost;

      mst->addVertex(v1);
      mst->addVertex(v2);
      mst->addEdge(v1, v2, cost);

      if (mst->hasCycles()) {
        mst->removeEdge(v1,v2);
      }

      if (mst->getNodeCount() >= getNodeCount()) {
        break;
      }
    }

    if (mst->getNodeCount() == 0) {
      return 0;
    }else{
      return mst;
    }
  }

  bool bicolor(){
    if (vertices != 0) {
      if (vertices->size > 0) {
        if (vertices->size == 1) {
          vertices->get(1)->color = color1;
          return true;
        }else{
          List<Vertex<T>*> nV = vertices->clone();
          List<Vertex<T>*>* notVisited = &nV;

          bicolor(vertices->get(1), notVisited, color1);

          if (notVisited->size > 0) {
            bicolor(notVisited->get(1), notVisited, color1);
          }
        }
      }else{
        return false;
      }
    }else{
      return false;
    }

    return false;
  }

  void bicolor(Vertex<T>* current, List<Vertex<T>*>* notVisited, string color){
    if (current->color != color1 && current->color != color2) {
      current->color = color;
      notVisited->remove(current);

      if (color == color1) {
        color = color2;
      }else{
        color = color1;
      }

      List<Vertex<T>*>* neighbors = current->neighbors();

      for (int i = 1; i <= neighbors->size; i++) {
        if (notVisited->contains(neighbors->get(i))) {
          bicolor(neighbors->get(i), notVisited, color);
        }
      }
    }
  }
};

#endif /* end of include guard: GRAPH_H */
