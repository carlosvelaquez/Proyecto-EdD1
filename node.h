#ifndef NODE_H
#define NODE_H

template <class T>
class Node{
protected:
  T data;
  Node<T>* previous;
  Node<T>* next;

public:
  Node<T>(T nData){
    data = nData;
    previous = 0;
    next = 0;
  }

  T getData(){
    return data;
  }

  Node<T>* getPrevious(){
    return previous;
  }

  Node<T>* getNext(){
    return next;
  }

  void setData(T nData){
    data = nData;
  }

  void setPrevious(Node* nPrevious){
    previous = nPrevious;
  }

  void setNext(Node* nNext){
    next = nNext;
  }

  ~Node(){
    if (previous != 0) {
      delete previous;
    }
    
    if (next != 0) {
      delete next;
    }
  }
};

#endif /* end of include guard: NODE_H */
