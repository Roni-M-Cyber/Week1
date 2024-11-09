#ifndef QUEUE_H
#define QUEUE_H

/* a queue contains positive integer values. */
typedef struct Queue
{
    unsigned int* array; // Array to store queue elements
    unsigned int front;  // Index of the front element
    unsigned int rear;   // Index of the rear element
    unsigned int size;   // Maximum size of the queue
    unsigned int count;  // Current number of elements in the queue
} Queue;

void initQueue(Queue* q, unsigned int size);
void cleanQueue(Queue* q);

void enqueue(Queue* q, unsigned int newValue);
int dequeue(Queue* q); // return element in top of queue, or -1 if empty

bool isEmpty(Queue* s);
bool isFull(Queue* s);

#endif /* QUEUE_H */
