#include "Utils.h"
#include "Stack.h"  // Include the stack header to use the stack functionality
#include <iostream>

// Task 1: Reverse an array using a stack
void reverse(int* nums, unsigned int size)
{
    Stack s;
    initStack(&s); // Initialize the stack

    // Push all elements from the array onto the stack
    for (unsigned int i = 0; i < size; ++i)
    {
        push(&s, nums[i]);
    }

    // Pop the elements back into the array to reverse the order
    for (unsigned int i = 0; i < size; ++i)
    {
        nums[i] = pop(&s); // Pop elements from stack and store them back into the array
    }

    cleanStack(&s); // Clean up the stack after use
}

// Task 2: Reverse 10 integers entered by the user
int* reverse10()
{
    int* nums = new int[10]; // Dynamically allocate an array to store the numbers

    std::cout << "Please enter 10 integers:\n";

    // Read the 10 integers from the user
    for (int i = 0; i < 10; ++i)
    {
        std::cin >> nums[i];
    }

    // Reverse the array using the reverse function
    reverse(nums, 10);

    return nums; // Return the reversed array
}
