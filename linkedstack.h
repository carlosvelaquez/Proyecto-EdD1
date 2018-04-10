#ifndef LINKEDSTACK_H
#define LINKEDSTACK_H

#include "node.h"

template <class T>

class linkedstack{
private:
    Node<T>* head;
    int size;
public:

    linkedstack<T>(){}

    linkedstack<T>(T nData){
        head = new Node<T>(nData);
        size = 1;
    }

    Node<T>* top(){
        Node<T>* tempNode = head;
        if(size==1){
            head = 0;
            size = 0;
            return tempNode;
        }
        for(int i=1; i<size; i++){
            tempNode = tempNode->getNext();
        }
        tempNode->getPrevious()->setNext(0);
        tempNode->setPrevious(0);
        size--;
        return tempNode;
    }

    void pop(T nData){
        Node<T>* tempNode = head;
        for(int i=1; i<size; i++){
            tempNode = tempNode->getNext();
        }
        tempNode->setNext(new Node<T>(nData));
        tempNode->getNext()->setPrevious(tempNode);
        size++;
        tempNode = 0;
        delete tempNode;
    }

    int Size(){
        return size;
    }

    bool contains(T nData){
        Node<T>* tempNode = head;
        while(tempNode!=0){
            if(tempNode->getData() == nData){
                return tempNode;
            }
        }
        return false;
    }

    T get(int num){
        Node<T>* tempNode = head;
        for(int i=1; i<size; i++){
            tempNode = tempNode->getNext();
        }
        return tempNode->getData();
    }

    Node<T>* operator [](int num){
            Node<T>* tempNode = head;
            for(int i=1; i<num; i++){
                 tempNode = tempNode->getNext();
            }
            return tempNode;
    }

};

#endif // LINKEDSTACK_H
