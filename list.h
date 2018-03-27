#ifndef LIST_H
#define LIST_H

#include "node.h"
#include <string>
#include <QStandardItem>
#include <QStandardItemModel>

using namespace std;

template <class T>
class List{
protected:
  Node<T>* head;
  Node<T>* tail;

public:
  int size;
  int capacity;

  List<T>(){
    head = 0;
    tail = 0;
    size = 0;
    capacity = std::numeric_limits<int>::max();
  }

  List<T>(int nCap){
    head = 0;
    tail = 0;
    size = 0;
    capacity = nCap;
  }

  bool insert(T data){
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

  T get(int index){
    Node<T>* currentNode = head;
    for (int i = 1; i < index; i++) {
      currentNode = currentNode->getNext();
    }

    return currentNode->getData();
  }

  bool remove(int index){
    if (index > size) {
      return false;
    }else{
      Node<T>* currentNode = head;

      for (int i = 1; i <= index; i++) {
        currentNode = currentNode->getNext();
      }

      Node<T>* prev = currentNode->getPrevious();
      Node<T>* next = currentNode->getNext();
      prev->setNext(next);
      next->setPrevious(prev);

      currentNode->setPrevious(0);
      currentNode->setNext(0);

      delete currentNode; //Se manda a la pija
      size --;
      return true;

    }
  }

  bool remove(T rData){
    Node<T>* currentNode = head;

    while(currentNode != 0 && rData != currentNode->getData()) {
      currentNode = currentNode->getNext();
    }

    if (currentNode == 0) {
      return false;
    }else if (rData != currentNode->getData()) {
      return false;
    }else{
      Node<T>* prev = currentNode->getPrevious();
      Node<T>* next = currentNode->getNext();
      prev->setNext(next);
      next->setPrevious(prev);

      currentNode->setPrevious(0);
      currentNode->setNext(0);

      delete currentNode;
      size --;
      return true;
    }
  }

  void clear(){/* condition */
    if (head != 0) {
      delete head;
    }

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

  /*QStandardItemModel* toItemModel(){
    QStandardItemModel* model = new QStandardItemModel();

    for (int i = 0; i < size; i++) {
      model->appendRow(new QStandardItem(string(get(i)).c_str()));
    }

    return model;
  }*/

  bool contains(T target){
    for (int i = 0; i < size; i++) {
      if (target == get(i)) {
        return true;
      }
    }

    return false;
  }

  ~List<T>(){
    if (head != 0) {
      delete head;
    }
  }
};

#endif /* end of include guard: LIST_H */
