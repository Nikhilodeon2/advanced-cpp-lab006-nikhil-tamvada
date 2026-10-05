#include "doubly_linked_list.h"
#include "singly_linked_list.h"

#include <iostream>

int main() {
    SLinkedList<int> singly;
    singly.push_front(20);
    singly.push_front(10);
    singly.push_back(30);

    DLinkedList<int> doubly;
    doubly.push_back(1);
    doubly.push_back(2);
    doubly.push_front(0);

    std::cout << "Singly linked list (" << singly.size() << "):";
    for (const int value : singly.to_vector()) {
        std::cout << ' ' << value;
    }
    std::cout << '\n';

    std::cout << "Doubly linked list (" << doubly.size() << "):";
    for (const int value : doubly.to_vector()) {
        std::cout << ' ' << value;
    }
    std::cout << '\n';
    return 0;
}
