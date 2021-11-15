#include <iostream>
#include "LinkedList.h"

int main()
{
  LinkedList list;

  // adding data
  list.pushBack(1);
  list.pushBack(2);
  list.pushBack(3);
  list.pushBack(4);
  list.pushBack(5);

  // print data
  list.print();

  // delete and print
  list.deleteNode(4);
  list.print();

  // delete none exsiting node;
  list.deleteNode(99);
  list.print();

  // print the size
  std::cout << list.getSize() << std::endl;

  return 0;
}