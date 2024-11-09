#include "Queue.h"
#include <iostream>

// Initializes the queue with a given size
void initQueue(Queue* q, unsigned int size)
{
    q->array = new unsigned int[size];  // Allocate memory for the queue
    q->front = 0;  // Set the front index
    q->rear = 0;   // Set the rear index
    q->size = size;  // Set the queue size
    q->count = 0;  // Initialize element count
}

// Cleans up the queue by deallocating the memory
void cleanQueue(Queue* q)
{
    delete[] q->array;  // Free the memory
    q->array = nullptr;  // Nullify the pointer
    q->front = 0;  // Reset front index
    q->rear = 0;   // Reset rear index
    q->size = 0;   // Reset queue size
    q->count = 0;  // Reset element count
}

// Adds a value to the queue if not full
void enqueue(Queue* q, unsigned int newValue)
{
    if (isFull(q))  // Check if full
    {
        std::cout << "Queue is full. Cannot enqueue.\n";  // Error message
        return;  // Exit function
    }
    q->array[q->rear] = newValue;  // Insert value at rear
    q->rear = (q->rear + 1) % q->size;  // Update rear index (circular)
    q->count++;  // Increment count
}

// Removes and returns the front value from the queue
int dequeue(Queue* q)
{
    if (isEmpty(q))  // Check if empty
    {
        std::cout << "Queue is empty. Cannot dequeue.\n";  // Error message
        return -1;  // Return failure
    }
    int value = q->array[q->front];  // Get value from front
    q->front = (q->front + 1) % q->size;  // Update front index (circular)
    q->count--;  // Decrement count
    return value;  // Return dequeued value
}

// Checks if the queue is empty
bool isEmpty(Queue* q)
{
    return q->count == 0;  // True if no elements
}

// Checks if the queue is full
bool isFull(Queue* q)
{
    return q->count == q->size;  // True if count equals size
}
