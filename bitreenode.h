#ifndef BITREENODE_H
#define BITREENODE_H

#include "tree.h"

template <class T>

class bitreenode{
private:
   T Data;
   bitreenode<T>* leftChild;
   bitreenode<T>* rightChild;

public:

   bitreenode<T>(){}

   bitreenode<T>(T nData){
       Data = nData;
       leftChild = 0;
       rightChild = 0;
   }

   bitreenode<T>(T nData, bitreenode<T>* nleftChild, bitreenode<T>* nrightChild){
       Data = nData;
       leftChild = nleftChild;
       rightChild = nrightChild;
   }

   void setData(T nData){
       Data = nData;
   }

   T* getData(){
        return &Data;
   }

   void setLeftChild(bitreenode<T>* nLeftChild){
       leftChild = nLeftChild;
   }

   void setLeftChild(T nLeftChild){
       leftChild = new bitreenode(nLeftChild);
   }

   bitreenode<T>* getLeftChild(){
       return leftChild;
   }

       //----------- Rigth Child ----------------
   void setRightChild(bitreenode<T>* nRightChild){
       rightChild = nRightChild;
   }

   void setRightChild(T nRightChild){
       rightChild = new bitreenode(nRightChild);
   }

   bitreenode<T>* getRightChild(){
        return rightChild;
   }


   bool hasChildren(){
      if (leftChild != 0 || rightChild != 0) {
         return true;
       }
        return false;
   }

   /*Tree<T>* toTree(){
     TreeNode<T>* root;

     construct(root, this);

     Tree<T>* tree = new Tree<T>();
     tree->setRoot(root);

     return tree;
   }

   void construct(TreeNode<T>* current, bitreenode<T>* currentNode){
     T* dat2;
     dat2 = currentNode->getData();
     T dat= *dat2;
     current->setData(dat);

     if (leftChild != 0) {
       TreeNode<T>* child;
       construct(child, leftChild);
       current->addChild(child);
     }

     if (rightChild != 0) {
       TreeNode<T>* child;
       construct(child, rightChild);
       current->addChild(child);
     }
   }*/

   ~bitreenode(){
       if(leftChild != 0 ){
            delete leftChild;
        }
        if(rightChild != 0){
            delete rightChild;
        }
    }
};

#endif // BITREENODE_H
