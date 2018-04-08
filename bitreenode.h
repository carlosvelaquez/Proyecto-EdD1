#ifndef BITREENODE_H
#define BITREENODE_H

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
