#ifndef QUEUE_H
#define QUEUE_H

#include "node.h"
#include "list.h"
#include <string>
#include <vector>

using namespace std;

template <class T>
class Queue{
protected:
  Node<T>* head;
  Node<T>* tail;

public:
  int size;
  int capacity;

  Queue<T>(){
    head = 0;
    tail = 0;
    size = 0;
    capacity = std::numeric_limits<int>::max();
  }

  Queue<T>(int nCap){
    head = 0;
    tail = 0;
    size = 0;
    capacity = nCap;
  }

  bool queue(T data){
    if (size >= capacity) {
      return false;
    }else{
      Node<T>* temp = new Node<T>(data);

      if (head == 0) {
        head = temp;
        tail = temp;
      }else{
        temp->setPrevious(tail);
        tail->setNext(temp);
        tail = temp;
      }

      size ++;
      return true;
    }
  }

  T dequeue(){
    T ret;

    if (head != 0) {
      ret = head->getData();
      head = head->getNext();
      size --;

      if (size == 0) {
        tail = 0;
      }
    }

    return ret;
  }

  T next(){
    T ret;

    if (head != 0) {
      ret = head->getData();
    }

    return ret;
  }

  void clear(){
    if (head != 0) {
      delete head;
    }

    head = 0;
    tail = 0;
    size = 0;
  }

  void Empty(){
    head = 0;
    tail = 0;
    size = 0;
  }

  bool isEmpty(){
    if (size == 0) {
      return true;
    }
    return false;
  }

  bool hasNext(){
    if (isEmpty()) {
      return false;
    }

    return true;
  }

  List<T> toList(){
    Node<T>* currentNode = head;
    List<T> nList;

    while (currentNode != 0) {
      nList.insert(currentNode->getData());
      currentNode = currentNode->getNext();
    }

    return nList;
  }

  bool contains(T target){
    Node<T>* currentNode = head;

    while (currentNode != 0) {
      if (target == currentNode->getData()) {
        return true;
      }
    }

    return false;
  }
};

#endif /* end of include guard: QUEUE_H */
