#include <iostream>

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

// DEFINE LINKED LIST CLASS
class LinkedList {
private:
  typedef struct node {
    int data;
    node* next;
  }* nodeptr;
  // nodePtr = struct node*

  nodeptr current;
  nodeptr temp;
  nodeptr head;

  int size;

public:
  LinkedList();
  void pushBack(int inputData);
  void deleteNode(int delData);
  void print();
  int getSize();
};

#endif