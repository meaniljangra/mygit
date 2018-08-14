#include <iostream>
#include "linkedlist.h"

int main()
{
  node *head = nullptr;

  createLinkedList(&head, 10);
  displayLinkedList(head);
  bubbleSort(head);
  displayLinkedList(head);
  std::cout << "The size of linked list is : " << sizeOfLinkedList(head) << std::endl;

  return 0;
}
