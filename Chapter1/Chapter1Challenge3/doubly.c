#include "doubly.h"
#include <stdlib.h>
void initList(struct DoublyLinkedList *list)
{
    list->first = NULL;
    list->last = NULL;
}

void insertItem(struct DoublyLinkedList* list, struct Node* position, int data){
    
}
void deleteItem(struct DoublyLinkedList* list, int data);
struct Node* findItem(struct DoublyLinkedList* list, int data);


int main()
{
    struct DoublyLinkedList list;
    initList(&list);

}