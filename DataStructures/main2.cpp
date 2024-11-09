#include "Utils.h"
#include <iostream>

int main()
{
    // Test the reverse function
    int nums[] = { 1, 2, 3, 4 };
    unsigned int size = sizeof(nums) / sizeof(nums[0]);

    std::cout << "Original array: ";
    for (unsigned int i = 0; i < size; ++i)
    {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    reverse(nums, size); // Reverse the array

    std::cout << "Reversed array: ";
    for (unsigned int i = 0; i < size; ++i)
    {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    // Test the reverse10 function
    int* reversedArray = reverse10();

    std::cout << "Reversed 10 integers: ";
    for (int i = 0; i < 10; ++i)
    {
        std::cout << reversedArray[i] << " ";
    }
    std::cout << std::endl;

    delete[] reversedArray; // Clean up the dynamically allocated array

    return 0;
}
