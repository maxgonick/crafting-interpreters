#ifndef DOUBLY_H
#define DOUBLY_H

struct Node
{
    int data;
    struct Node* next;
    struct Node* prev;
};

struct DoublyLinkedList
{
    struct Node* first;
    struct Node* last;
};

struct Node* findItem(struct DoublyLinkedList* list, int data);
void deleteItem(struct DoublyLinkedList* list, int data);
void insertItem(struct DoublyLinkedList* list, struct Node* position, int data);
void initList(struct DoublyLinkedList* list);

#endif // DOUBLY_H