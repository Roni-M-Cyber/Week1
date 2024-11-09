#include "Stack.h"
#include "LinkedList.h"
#include <iostream>

// Initialize an empty stack
void initStack(Stack* s)
{
    s->top = nullptr;  // The stack is initially empty, so top is nullptr
}

// Clean up the stack by deleting all nodes
void cleanStack(Stack* s)
{
    cleanList(&s->top);  // Use cleanList from LinkedList.h to delete all nodes
}

// Push an element onto the stack
void push(Stack* s, unsigned int element)
{
    addFront(&s->top, element);  // Use addFront from LinkedList.h to add element to the front
}

// Pop an element from the stack
int pop(Stack* s)
{
    if (isEmpty(s))  // Check if the stack is empty
    {
        std::cout << "Stack is empty. Cannot pop.\n";
        return -1;  // Return -1 if the stack is empty
    }

    return removeFront(&s->top);  // Use removeFront from LinkedList.h to remove the front element
}

// Check if the stack is empty (stack is empty if top is nullptr)
bool isEmpty(Stack* s)
{
    return s->top == nullptr;  // If top is nullptr, stack is empty
}

// Stack is never full in a linked list implementation
bool isFull(Stack* s)
{
    return false;  // Linked list-based stack can grow dynamically
}
