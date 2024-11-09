#include "Stack.h"
#include <iostream>

int main()
{
    Stack s;  // Create an instance of Stack
    initStack(&s);  // Initialize the stack

    // Push some elements to the stack
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    // Pop elements from the stack and display them
    std::cout << "Popped: " << pop(&s) << "\n";
    std::cout << "Popped: " << pop(&s) << "\n";

    // Push more elements
    push(&s, 40);
    push(&s, 50);

    // Pop remaining elements
    std::cout << "Popped: " << pop(&s) << "\n";
    std::cout << "Popped: " << pop(&s) << "\n";
    std::cout << "Popped: " << pop(&s) << "\n";

    // Clean the stack
    cleanStack(&s);

    return 0;
}
