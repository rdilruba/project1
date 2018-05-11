#ifndef LinkedList_H
#define LinkedList_H

#include <iostream>
#include "Node.h"

class LinkedList {
public:
    int length;
    // pointer to the first element of LinkedList
    Node *head = 0;
    // pointer to the last element of LinkedList
    Node *tail = 0;

    LinkedList();

    LinkedList(const LinkedList &list);

    LinkedList &operator=(const LinkedList &list);

    // add a new element to the back of LinkedList
    void pushTail(Member data);

    ~LinkedList();
};

#endif
