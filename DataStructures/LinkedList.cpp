#include "LinkedList.h"
#include <iostream>

void initList(LinkedList* list)
{
    list->head = nullptr; // Initialize an empty list (no nodes)
}

void cleanList(LinkedList* list)
{
    Node* current = list->head;
    Node* nextNode = nullptr;

    // Traverse and delete all nodes
    while (current != nullptr)
    {
        nextNode = current->next;
        delete current; // Deallocate the node
        current = nextNode;
    }

    list->head = nullptr; // Set head to nullptr to mark the list as empty
}

void push(LinkedList* list, int value)
{
    Node* newNode = new Node; // Allocate memory for a new node
    newNode->value = value;
    newNode->next = list->head; // Link the new node to the previous head
    list->head = newNode; // Set the new node as the head of the list
}

int pop(LinkedList* list)
{
    if (isEmpty(list))
    {
        std::cout << "List is empty. Cannot pop.\n";
        return -1; // Return -1 if the list is empty
    }

    Node* temp = list->head;
    int value = temp->value; // Get the value of the first node
    list->head = list->head->next; // Move the head pointer to the next node
    delete temp; // Delete the old head node

    return value; // Return the popped value
}

bool isEmpty(LinkedList* list)
{
    return list->head == nullptr; // List is empty if head is nullptr
}
