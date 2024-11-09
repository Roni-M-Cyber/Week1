//#include "Queue.h"
//#include <iostream>
//
//int main()
//{
//	Queue q;
//	initQueue(&q, 5);
//
//	std::cout << "Dequeued: " << dequeue(&q) << "\n";
//
//	enqueue(&q, 10);
//	enqueue(&q, 20);
//	enqueue(&q, 30);
//	enqueue(&q, 40);
//	enqueue(&q, 50);
//	enqueue(&q, 60);
//
//	std::cout << "Dequeued: " << dequeue(&q) << "\n";
//	std::cout << "Dequeued: " << dequeue(&q) << "\n";
//	std::cout << "Dequeued: " << dequeue(&q) << "\n";
//	std::cout << "Dequeued: " << dequeue(&q) << "\n";
//
//
//	enqueue(&q, 70);
//	enqueue(&q, 80);
//	enqueue(&q, 90);
//
//	std::cout << "Dequeued: " << dequeue(&q) << "\n";
//
//	/*
//	if (isFull(&q))
//		std::cout << "Queue is full.\n";
//	if (isEmpty(&q))
//		std::cout << "Queue is empty.\n";
//	*/
//	// I wasn't sure if i should include checks here and in the Queue.cpp file so i just added them in both and commented this one.
//
//	cleanQueue(&q);
//}