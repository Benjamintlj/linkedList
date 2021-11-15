#include "LinkedList.h"

using namespace std;

// constructor
LinkedList::LinkedList()
{
  current = nullptr;
  temp = nullptr;
  head = nullptr;

  size = 0;
}


// push input to the back
void LinkedList::pushBack(int inputData)
{
  // create new node
  nodeptr n = new node;
  n->next = nullptr;
  n->data = inputData;


  // check if the list is empty - head points to first node
  if (head == nullptr)
    head = n;

  // if the list is empty - find the end of the list - point to next node
  else {
    current = head;

    
    while (current->next != nullptr) 
      current = current->next;
    
    
    current->next = n;
  }
  size++;
}


// delete first node with data == to delData
void LinkedList::deleteNode(int delData)
{
  current = head;

  // finds the data or the end of the list
  while (current->next != nullptr && current->data != delData) 
  {
    temp = current;
    current = current->next;
  }
    
  // if found data
  if (current->data == delData) {
    // set pointer to node prior to the one after the node to be deleted
    temp->next = current->next;
    // delete the node
    delete current;

    // change size
    size--;
  } 
  // report that data was not there
  else if (current->next == nullptr) {
    cerr << delData << " does not exist" << endl;
  }
}


// print contents of entire list
void LinkedList::print() 
{
  current = head;

  while (current != nullptr) 
  {
    cout << current->data << " ";
    current = current->next;
  }

  cout << endl;
}


// returns the size
int LinkedList::getSize()
{
  return size;
}