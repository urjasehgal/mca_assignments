#include<iostream>
template<class T>
class Node{

  public :
 
  T data;
  Node<T>* next ;//pointing to object of node

  Node<T>(T d){
    data = d;
    next = NULL;
  }

};


