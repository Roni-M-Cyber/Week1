#include "LinkedList.h"
#include <iostream>

// Initialize an empty list (head points to NULL)
void initList(LinkedListNode** head)
{
    *head = nullptr;
}

// Add a new node with value at the front of the list
void addFront(LinkedListNode** head, unsigned int value)
{
    LinkedListNode* newNode = new LinkedListNode; // Allocate memory for the new node
    newNode->value = value;
    newNode->next = *head; // Point the new node's next to the current head
    *head = newNode;       // Update head to point to the new node
}

// Remove the node at the front of the list
int removeFront(LinkedListNode** head)
{
    if (isEmpty(*head))
    {
        std::cout << "List is empty. Cannot remove from the front.\n";
        return -1; // Return -1 if list is empty
    }

    LinkedListNode* temp = *head; // Temporary pointer to hold the current head
    int value = temp->value;      // Store the value of the node to return
    *head = temp->next;           // Move head to the next node
    delete temp;                  // Delete the old head node
    return value;                 // Return the value of the removed node
}

// Check if the list is empty
bool isEmpty(LinkedListNode* head)
{
    return head == nullptr; // List is empty if head is NULL
}

// Clean up the entire list by deleting all nodes
void cleanList(LinkedListNode** head)
{
    while (!isEmpty(*head))
    {
        removeFront(head); // Remove all nodes from the front
    }
}
