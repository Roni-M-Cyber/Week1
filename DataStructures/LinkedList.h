#ifndef LINKEDLIST_H
#define LINKEDLIST_H

/* Node for a linked list storing positive integers */
typedef struct LinkedListNode
{
    unsigned int value;         // Value of the node
    LinkedListNode* next;       // Pointer to the next node in the list
} LinkedListNode;

/* Function declarations for the linked list */
void initList(LinkedListNode** head); // Initialize an empty list
void addFront(LinkedListNode** head, unsigned int value); // Add node at the front
int removeFront(LinkedListNode** head); // Remove node from the front
bool isEmpty(LinkedListNode* head); // Check if the list is empty
void cleanList(LinkedListNode** head); // Clean up the list by deleting all nodes

#endif // LINKEDLIST_H
