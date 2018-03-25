#ifndef TREENODE_H
#define TREENODE_H

#include <string>

using namespace std;

template <class T>
class TreeNode{

protected:
    T data;
    TreeNode<T>* parent;
    TreeNode<T>* leftChild;
    TreeNode<T>* rightChild;

public:
    TreeNode<T>(T nData, TreeNode<T>* nParent){
        data = nData;
        parent = nParent;
        leftChild = 0;
        rightChild = 0;
    }

    T getData(){
        return data;
    }

    TreeNode<T>* getParent(){
        return parent;
    }

    TreeNode<T>* getLeftChild(){
        return leftChild;
    }

    TreeNode<T>* getRightChild(){
        return rightChild;
    }

    void setData(T nData){
        data = nData;
    }

    void setParent(TreeNode<T>* nParent){
        parent = nParent;
    }

    void setLeftChild(TreeNode<T>* nLeftChild){
        leftChild = nLeftChild;
    }

    void setRightChild(TreeNode<T>* nRightChild){
        rightChild = nRightChild;
    }

    void setLeftChild(T nLeftChild){
        leftChild = new TreeNode(nLeftChild);
    }

    void setRightChild(T nRightChild){
        rightChild = new TreeNode(nRightChild);
    }

    bool hasChildren(){
      if (leftChild != 0 || rightChild != 0) {
        return true;
      }

      return false;
    }

    operator string() const{
      string itemString(data);
      return itemString;
    }
};

#endif // TREENODE_H
