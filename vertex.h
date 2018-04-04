#ifndef VERTEX_H
#define VERTEX_H

#include <string>
#include "list.h"
using namespace std;

template <class T>
class Vertex{

protected:
  T data;
  List<Vertex<T>*>* edges;
  string displayName;

public:
  int xPos = 0;
  int yPos = 0;

  Vertex(T nData){
    data = nData;
    edges = new List<Vertex<T>*>();
    displayName = "Vertex";
  }

  Vertex(T nData, string nDisplay){
    data = nData;
    edges = new List<Vertex<T>*>();
    displayName = nDisplay;
  }

  List<Vertex<T>*>* neighbors(){
    return edges;
  }

  bool adjacent(Vertex<T>* nVertex){
    if (edges->contains(nVertex())) {
      return true;
    }

    return false;
  }

  bool addEdge(Vertex<T>* nVertex){
    if (!adjacent(nVertex)) {
      if (edges->insert(nVertex)) {
        return true;
      }

      return false;
    }

    return false;
  }

  bool removeEdge(Vertex<T>* nVertex){
    if (adjacent(nVertex)) {
      edges->remove(nVertex);
      return true;
    }

    return false;
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

};

#endif /* end of include guard: VERTEX_H */
