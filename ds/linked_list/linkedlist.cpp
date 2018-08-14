#include <cstdlib>
#include <iostream>
#include <time.h>
#include "linkedlist.h"

void createLinkedList(node **head, int size)
{
  srand(time(nullptr));
  for (int i = 0; i < size; i++)
  {
    *head = new node(rand() % size + 1);
    head = &((*head)->next);
  }
}

void displayLinkedList(const node *head)
{
  std::cout << "The linked list is : ";
  while (head)
  {
    std::cout << head->data << " ";
    head = head->next;
  }

  std::cout << std::endl;
}

std::size_t sizeOfLinkedList(const node *head)
{
  std::size_t size = 0;

  while (head)
  {
    size++;
    head = head->next;
  }

  return size;
}

void bubbleSort(node *head)
{
  node *p = head;
  std::size_t size = sizeOfLinkedList(head);
  int tmp = 0;

  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size - i; j++)
    {
      if (head->next && (head->data > head->next->data))
      {
        tmp = head->data;
        head->data = head->next->data;
        head->next->data = tmp;
      }
      head = head->next;
    }
    head = p;
  }
}


