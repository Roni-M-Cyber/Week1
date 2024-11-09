#ifndef STACK_H
#define STACK_H

#include "LinkedList.h"

/* A stack that stores positive integers, implemented using a linked list */
typedef struct Stack
{
    LinkedListNode* top; // Pointer to the top node of the stack
} Stack;

// Function declarations for stack operations
void push(Stack* s, unsigned int element);  // Push an element onto the stack
int pop(Stack* s);  // Pop an element from the stack

void initStack(Stack* s);  // Initialize an empty stack
void cleanStack(Stack* s);  // Clean the stack (delete all nodes)

bool isEmpty(Stack* s);  // Check if the stack is empty
bool isFull(Stack* s);   // Check if the stack is full (irrelevant for linked list-based stack)

#endif // STACK_H
