#ifndef GRAPH_H
#define GRAPH_H

#include "vertex.h"
#include <fstream>
#include <sstream>

using namespace std;

template <class T>
class Graph{

private:
  List<Vertex<T>*>* vertices;
  bool weighted;
  bool bicolored = false;

public:
  const string color1 = "#f44336";
  const string color2 = "#3F51B5";
  string defaultColor = "black";

  Graph(){
    vertices = new List<Vertex<T>*>;
    weighted = false;
  }

  Graph(bool nWeighted){
    vertices = new List<Vertex<T>*>;
    weighted = nWeighted;
  }

  Graph(ifstream& file){
    char delim = ',';
    vertices = new List<Vertex<T>*>;

    string line;
    getline(file, line);
    weighted = false;

    if (line == "1") {
      weighted = true;
    }

    getline(file, line);
    defaultColor = line;
    getline(file, line);

    int size = stoi(line);

    for (int i = 1; i <= size; i++) {
      getline(file, line);
      stringstream ss(line);
      string displayName, posX, posY;

      getline(ss, displayName, delim);
      getline(ss, posX, delim);
      getline(ss, posY, delim);

      T data;
      Vertex<T>* nVertex = new Vertex<T>(data, displayName);
      nVertex->pos = QPoint(stoi(posX), stoi(posY));

      vertices->insert(nVertex);
    }

    for (int i = 1; i <= size; i++) {
      getline(file, line);
      stringstream ss(line);

      string connected;

      for (int j = 1; j <= size; j++) {
        getline(ss, connected, delim);
        if (connected != "N") {
          addEdge(vertices->get(i), vertices->get(j), stod(connected));
        }
      }
    }
  }

  void copy(Graph<T> cGraph){
    vertices = cGraph.getVertices();
    weighted = cGraph.isWeighted();
    bicolored = cGraph.isBicolored();
    defaultColor = cGraph.defaultColor;
  }

  bool addVertex(T nData){
    return vertices->insert(new Vertex<T>(nData));
  }

  bool addVertex(Vertex<T>* nVertex){
    if (!vertices->contains(nVertex)) {
      nVertex->color = defaultColor;
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

  bool isAllCheck(){
      for(int i=0; i<vertices->size; i++){
          if(vertices->get(i)->isCheck()){
            return false;
          }
      }
      return true;
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

    Graph<T>* mst = new Graph<T>(true);
    mst->defaultColor = "#3949AB";
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
        v1->skim();
        v2->skim();
      }

      if (mst->getNodeCount() >= getNodeCount() && mst->isConnected()) {
        break;
      }
    }

    if (mst->getNodeCount() == 0 || mst->getVertices()->size != vertices->size || !mst->isConnected()) {
      return 0;
    }else{
      return mst;
    }
  }

  bool bicolor(){
    bicolored = true;

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

  bool isBicolorable(){
    bicolor();
    string color = "";
    string neighborColor = "";

    for (int i = 1; i <= vertices->size; i++) {
      List<Vertex<T>*>* neighbors = vertices->get(i)->neighbors();
      color = vertices->get(i)->color;

      for (int j = 1; j <= neighbors->size; j++) {
        neighborColor = neighbors->get(j)->color;

        if (neighborColor == color && neighborColor != defaultColor) {
          return false;
        }
      }
    }

    return true;
  }

  bool isBicolored(){
    return bicolored;
  }

  void color(){
    for (int i = 1; i <= vertices->size; i++) {
      vertices->get(i)->color = defaultColor;
    }

    bicolored = false;
  }

  int size(){
    return vertices->size;
  }

  string toTextFile(){
    string output = "";
    if (weighted) {
      output += "1";
    }else{
      output += "0";
    }

    output += "\n";
    output += defaultColor;
    output += "\n";
    output += to_string(vertices->size);
    output += "\n";

    for (int i = 1; i <= vertices->size; i++) {
      output += vertices->get(i)->getDisplayName();
      output += ",";
      output += to_string(vertices->get(i)->pos.x());
      output += ",";
      output += to_string(vertices->get(i)->pos.y());
      output += "\n";
    }

    for (int i = 1; i <= vertices->size; i++) {
      for (int j = 1; j <= vertices->size; j++) {
        if (vertices->get(i)->adjacent(vertices->get(j))) {
          output += to_string(vertices->get(i)->getCosts()->get(vertices->get(i)->getEdges()->indexOf(vertices->get(j))));
        }else{
          output += "N";
        }

        if (j != vertices->size) {
          output += ",";
        }
      }
      output += "\n";
    }

    return output;
  }

  bool isConnected(){
    List<Vertex<T>*>* visited = new List<Vertex<T>*>();

    if (vertices->size > 0) {
      DFS(vertices->get(1), visited);

      if (visited->size == vertices->size) {
        return true;
      }
    }

    return false;
  }

  void DFS(Vertex<T>* current, List<Vertex<T>*>* visited){
    if (!visited->contains(current)) {
      visited->insert(current);

      List<Vertex<T>*>* toVisit = current->neighbors();
      for (int i = 1; i <= toVisit->size; i++) {
        DFS(toVisit->get(i), visited);
      }
    }
  }

  int distanceBetween(Vertex<T>* v1, Vertex<T>* v2){
      if(v1->getDisplayName()==v2->getDisplayName()){
        return 0;
      }else{
          for(int i=0; i<v1->getEdges()->size; i++){
              if(v1->getEdges()->get(i)->getDisplayName() == v2->getDisplayName()){
                return v1->getCosts()->get(i);
              }
          }
      }
      return 9999999;
  }

  int** CreateDistancesMatrix(){
      int** matrix = new int*[vertices->size];
      for(int i=0; i<vertices->size; i++){
          matrix = new int[vertices->size];
      }
      for(int i=0; i<vertices->size; i++){
          for(int j=0; j<vertices->size; j++){
              matrix[i][j] = distanceBetween(vertices->get(i),vertices->get(j));
          }
      }
      return matrix;
  }

  /* ************** Dijkstra *************** */

  /*
   *
   */
 void MinimalCost_Dijkstra(Vertex<T>* nVertex){
      for(int i=1; i<=vertices->size; i++){
          vertices->get(i)->setDistancia(99999999);
          vertices->get(i)->setPrevio(0);
      }
      DijkstraSearch(nVertex);
  }

  void DijkstraSearch(Vertex<T>* vertice){
      for(int i=1; i<=vertice->getEdges()->size; i++){
        if(!vertice->getEdges()->get(i)->isCheck()){
           if(vertice->getDistancia()+vertice->getCosts()->get(i) < vertice->getEdges()->get(i)->getDistancia()){
              vertice->getEdges()->get(i)->setDistancia(vertice->getDistancia()+vertice->getCosts()->get(i));
              vertice->getEdges()->get(i)->setPrevio(vertice);
           }
        }
      }
      vertice->setCheck(true);
      for(int i=1; i<=vertice->getEdges()->size; i++){
        DijkstraSearch(vertice->getEdges()->get(i));
      }
  }


  /* ************** Floyd *************** */

  /* Muestra el resultado de la matriz de adyacencia.
   */


  /* Devuelve la matriz de adyacencia
   * con los costos minimos calculados
   */
  int** MinimalCost_Floyd(){
    int** DistancesMatrix = CreateDistancesMatrix();
    Floyd(DistancesMatrix);
    return DistancesMatrix;
  }

  /*Implementacion del algoritmo de Floyd
   *Ordena la matriz que contiene los costos de cada arista.
  */
  void Floyd(int** M){
    for(int i=0; i<vertices->size; i++){
        for(int j=0; j<vertices->size; j++){
            for(int k=0; k<vertices->size; k++){
                if(M[j][k]>M[j][i]+M[i][k]){
                    M[j][k] = M[j][i]+M[i][k];
                }
            }
        }
    }
  }

};

#endif /* end of include guard: GRAPH_H */
