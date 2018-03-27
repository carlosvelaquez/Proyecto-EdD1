#ifndef TREE_H
#define TREE_H

#include "treenode.h"
#include <QStandardItem>
#include <QStandardItemModel>
#include <string>

using namespace std;

template <class T>
class Tree{

protected:
  TreeNode<T>* root;
  List<TreeNode<T>*>* nodeList;
  QStandardItemModel* itemModel;
  string name;

public:
  Tree<T>(){
    root = 0;
    nodeList = new List<TreeNode<T>*>();
    itemModel = 0;
    name = "Tree";
  }

  Tree<T>(string nName){
    root = 0;
    nodeList = new List<TreeNode<T>*>();
    itemModel = 0;
    name = nName;
  }

  Tree<T>(T data){
    root = new TreeNode<T>(data);
    nodeList = new List<TreeNode<T>*>();
    nodeList.insert(root);
    itemModel = 0;
    name = "Tree";
  }

  Tree<T>(TreeNode<T>* nRoot){
    root = nRoot;
    nodeList = new List<TreeNode<T>*>();
    nodeList.insert(root);
    itemModel = 0;
    name = "Tree";
  }

  bool isEmpty(){
    if (root == 0) {
      return true;
    }

    return false;
  }

  void refresh(){
    QStandardItem* item = new QStandardItem("Vista de Árbol");
    nodeList->clear();
    itemModel = new QStandardItemModel();

    if (root != 0) {
      traverse(root, item);
    }else{
      item->appendRow(new QStandardItem("No hay elementos"));
    }

    itemModel->setHorizontalHeaderItem(0, new QStandardItem(name.c_str()));
    itemModel->appendRow(item);
  }

  void traverse(TreeNode<T>* currentNode, QStandardItem* item){
    nodeList->insert(currentNode);

    QStandardItem* nItem = new QStandardItem(string(currentNode->getData()).c_str());
    item->appendRow(nItem);

    for (int i = 0; i < currentNode->getChildren()->size; i++) {
      traverse(currentNode->getChildren()->get(i), nItem);
    }
  }

  void remove(TreeNode<T>* currentNode){
    if (currentNode != 0) {
      delete currentNode;
      refresh();
    }
  }

  void remove(T rData){
    remove(find(rData));
  }

  TreeNode<T>* find(T fData){
    refresh();
    TreeNode<T>* currentNode = 0;

    for (int i = 0; i < nodeList->size; i++) {
      currentNode = nodeList->get(i);
      if (fData == currentNode->getData()) {
        return currentNode;
      }
    }

    return 0;
  }

  TreeNode<T>* getRoot(){
    return root;
  }

  void setRoot(T nData){
    root = new TreeNode<T>(nData);
  }

  void setRoot(TreeNode<T>* nRoot){
    root = nRoot;
  }

  void setName(string nName){
    name = nName;
  }

  List<TreeNode<T>*>* getNodeList(){
    refresh();
    return nodeList;
  }

  List<TreeNode<T>*>* getLeafList(){
    refresh();

    List<TreeNode<T>*>* nList = new List<TreeNode<T>*>();
    for (int i = 0; i < nodeList.size; i++) {
      if (!nodeList->get(i)->hasChildren()) {
        nList->insert(nodeList->get(i));
      }
    }

    if (nList->size == 0) {
      return 0;
    }

    return nList;
  }

  QStandardItemModel* toItemModel(){
    refresh();
    return itemModel;
  }

  ~Tree<T>(){
    if (root != 0) {
      delete root;
    }
  }
};

#endif /* end of include guard: TREE_H */
