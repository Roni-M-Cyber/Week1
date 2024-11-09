#include "LinkedList.h"
#include <iostream>

int main()
{
    LinkedList list;
    initList(&list); // Initialize the linked list

    // Adding elements to the list
    push(&list, 10);
    push(&list, 20);
    push(&list, 30);

    // Popping elements from the list
    std::cout << "Popped: " << pop(&list) << "\n"; // Should print 30
    std::cout << "Popped: " << pop(&list) << "\n"; // Should print 20

    // Adding more elements
    push(&list, 40);
    push(&list, 50);

    // Popping remaining elements
    std::cout << "Popped: " << pop(&list) << "\n"; // Should print 50
    std::cout << "Popped: " << pop(&list) << "\n"; // Should print 40
    std::cout << "Popped: " << pop(&list) << "\n"; // Should print 10

    // List should now be empty
    std::cout << "List is empty: " << (isEmpty(&list) ? "Yes" : "No") << "\n";

    cleanList(&list); // Clean up the list
    return 0;
}
