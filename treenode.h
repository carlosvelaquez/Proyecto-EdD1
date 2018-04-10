#ifndef TREENODE_H
#define TREENODE_H

#include "list.h"

template <class T>
class TreeNode{

protected:
  TreeNode<T>* parent;
  List<TreeNode<T>*>* children;
  T data;
  int level;

public:
  TreeNode<T>(T nData){
    parent = 0;
    data = nData;
    children = new List<TreeNode<T>*>();
    level = 0;
  }

  TreeNode<T>(TreeNode<T>* nParent, T nData){
    parent = nParent;
    data = nData;
    children = new List<TreeNode<T>*>();

    if (parent != 0) {
      level = parent->getLevel() + 1;
    }
  }

  TreeNode<T>* getParent(){
    return parent;
  }

  void setParent(TreeNode<T>* nParent){
    parent = nParent;
  }

  T getData(){
    return data;
  }

  void setData(T nData){
    data = nData;
  }

  List<TreeNode<T>*>* getChildren(){
    return children;
  }

  int getLevel(){
    return level;
  }

  bool hasChildren(){
    if (children->size == 0) {
      return false;
    }

    return true;
  }

  void addChild(TreeNode<T>* nChild){
    nChild->setParent(this);
    children->insert(nChild);
  }

  void addChild(T nChild){
    children->insert(new TreeNode<T>(this, nChild));
  }

  ~TreeNode<T>(){
    if (children != 0) {
      for (int i = 0; i < children->size; i++) {
        delete this->getChildren()->get(i);
      }

      delete children;
    }
  }
};

#endif /* end of include guard: TREENODE_H */
