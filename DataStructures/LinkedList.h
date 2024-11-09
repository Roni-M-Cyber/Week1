#ifndef LINKEDLIST_H
#define LINKEDLIST_H

// Node structure for the linked list
typedef struct Node
{
    int value;        // The value of the node
    struct Node* next; // Pointer to the next node
} Node;

// Linked List structure
typedef struct LinkedList
{
    Node* head; // Pointer to the first node in the list
} LinkedList;

// Function prototypes
void initList(LinkedList* list);
void cleanList(LinkedList* list);
void push(LinkedList* list, int value);  // Add to the front
int pop(LinkedList* list);               // Remove from the front
bool isEmpty(LinkedList* list);          // Check if the list is empty

#endif // LINKEDLIST_H
