#ifndef ARBOL_H
#define ARBOL_H

#include "treenode.h"
#include "list.h"
#include <string>

using namespace std;

template <class T>
class Arbol{

protected:
    TreeNode<T>* root;
    TreeNode<T>* cNode; //Nodo actual
    int passType = 0;

    List<TreeNode<T>*> leafList = 0;

public:
  const int PREVIO = 0;
  const int SIMETRICO = 1;
  const int POSTERIOR = 2;

  //setPassType(Arbol.PREVIO);

    Arbol<T>(){
        root = 0;
    }

    TreeNode<T>* find(T data){
      return find(data, root);
    }

    TreeNode<T>* find(T data, TreeNode<T>* currentNode){
      if (currentNode->getData() == data) {
        return currentNode;
      }else{
        TreeNode<T>* temp = 0;

        if (currentNode->getLeftChild() != 0) {
          temp = find(data, currentNode->getLeftChild());
        }

        if (temp != 0){
          return temp;
        }

        if (currentNode->getRightChild() != 0) {
          temp = find(data, currentNode->getRightChild());
        }

        return 0;
      }
    }

    bool insert(T data, T parent){ //Dato de parametro
      TreeNode<T>* currentNode = find(parent);

      if (currentNode->getLeftChild() == 0) {
        currentNode->setLeftChild(new TreeNode<T>(data, currentNode));
      }else if (currentNode->getRightChild() == 0){
        currentNode->setRightChild(new TreeNode<T>(data, currentNode));
      }else{
        return false;
      }

      return true;
    }

    bool insert(T data){ //Dato de parametro
      TreeNode<T>* currentNode = root;

      if (currentNode->getLeftChild() == 0) {
        currentNode->setLeftChild(new TreeNode<T>(data, currentNode));
      }else if (currentNode->getRightChild() == 0){
        currentNode->setRightChild(new TreeNode<T>(data, currentNode));
      }else{
        return false;
      }

      return true;
    }


    void updateLeafList(){
      leafList = new List<TreeNode<T>*>();
      updateLeafList(root);
    }

    void updateLeafList(TreeNode<T>* currentNode){
      if (currentNode != 0) {
        if (currentNode->hasChildren()) {
          updateLeafList(currentNode->getLeftChild());
          updateLeafList(currentNode->getRightChild());
        }else{
          leafList.insert(currentNode);
        }
      }
    }

    QStandardItemModel* genModel(){
      QStandardItemModel* model = new QStandardItemModel();
      QStandardItem* rootItem = new QStandardItem("Empleados");

      if (root == 0) {
        model->appendRow(rootItem);
        return model;
      }

      constructModel(rootItem, root);
      model->appendRow(rootItem);
      return model;
    }

    void constructModel(QStandardItem* item, TreeNode<T>* currentNode){
      QStandardItem* newItem = new QStandardItem(((string) currentNode->getData()).c_str());
      item->appendRow(newItem);

      if (currentNode->getLeftChild() != 0) {
        constructModel(newItem, currentNode->getLeftChild());
      }

      if (currentNode->getRightChild() != 0) {
        constructModel(newItem, currentNode->getRightChild());
      }
    }

    List<TreeNode<T>*> getLeafList(){
      return leafList;
    }

    /*void insert(T data){
        if(root == 0){
            root = new TreeNode<T>(data);
        }else{
            TreeNode<T>* currentNode = root;
            bool posFound = false;

            while(!posFound){
                if (data < currentNode->getData()) {
                  if (currentNode->getLeftChild() == 0) {
                    currentNode->setLeftChild(data);
                    posFound = true;
                  }else{
                    currentNode = currentNode->getLeftChild();
                  }
                }else{
                  if (currentNode->getRightChild() == 0) {
                    currentNode->setRightChild(data);
                    posFound = true;
                  }else{
                    currentNode = currentNode->getRightChild();
                  }
                }
            }

        }
    }*/
};

#endif // ARBOL_H
