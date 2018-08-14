#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <cstddef>

struct node
{
  int data;
  node *next;

  node(int i) : data(i), next(nullptr) {}
  node() : data(0), next(nullptr) {}
};

void createLinkedList(node **head, int size);
void displayLinkedList(const node *head);
std::size_t sizeOfLinkedList(const node *head);
void bubbleSort(node *head);

#endif // LINKEDLIST_H
