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

      for (int i = 2; i <= index; i++) {
        currentNode = currentNode->getNext();
      }

      return currentNode->getData();
  }

  bool remove(int index){
    if (index > size) {
      return false;
    }else{
      Node<T>* currentNode = head;

      for (int i = 2; i <= index; i++) {
        currentNode = currentNode->getNext();
      }

      Node<T>* prev = currentNode->getPrevious();
      Node<T>* next = currentNode->getNext();

      if (prev != 0) {
        prev->setNext(next);
      }

      if (next != 0) {
        next->setPrevious(prev);

        if (prev == 0) {
          head = next;
        }
      }

      currentNode->setPrevious(0);
      currentNode->setNext(0);

      delete currentNode;
      size --;
      return true;

    }
  }

  bool remove(T rData){
    if (contains(rData)) {
      return remove(indexOf(rData));
    }else{
      return false;
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

  bool contains(T target){
    for (int i = 1; i <= size; i++) {
      if (target == get(i)) {
        return true;
      }
    }

    return false;
  }

  bool contains(T target, T exclude){
    for (int i = 1; i <= size; i++) {
      if (target == get(i)) {
        if (exclude == get(i)) {
          return false;
        }
        return true;
      }
    }

    return false;
  }

  int indexOf(T dat){
    Node<T>* currentNode = head;
    int count = 0;

    while (currentNode != 0) {
      count ++;

      if (currentNode->getData() == dat) {
        return count;
      }else{
        currentNode = currentNode->getNext();
      }
    }

    return 0;
  }

  Node<T>* getNode(int index){
    if (index <= 1) {
      return head;
    }else{
      Node<T>* currentNode = head;

      for (int i = 2; i <= index; i++) {
        currentNode = currentNode->getNext();
      }

      return currentNode;
    }
  }

  Node<T>* findNode(T dat){
    Node<T>* currentNode = head;

    while (currentNode != 0) {
      if (currentNode->getData() == dat) {
        return currentNode;
      }else{
        currentNode = currentNode->getNext();
      }
    }

    return 0;
  }


  void swap(int i1, int i2){
    if (i1 <= size && i2 <= size && i1 > 0 && i2 > 0) {
      Node<T>* n1 = getNode(i1);
      Node<T>* n2 = getNode(i2);

      T tmp = n1->getData();

      /*n2->setPrevious(n1->getPrevious());
      n1->setNext(n2->getNext());
      n2->setNext(n1);
      n1->setPrevious(n2);*/

      n1->setData(n2->getData());
      n2->setData(tmp);
    }
  }

  List<T> clone(){
    List<T> nList;

    for (int i = 1; i <= size; i++) {
      nList.insert(get(i));
    }

    return nList;
  }

  ~List<T>(){
    if (head != 0) {
      //delete head;
    }
  }
};

#endif /* end of include guard: LIST_H */
