#ifndef NODE_H
#define NODE_H

#include <cstddef>
#include <iostream>
#include "Member.h"

class Node{
public:
    Member data;
    Node* next = 0;

    Node(Member data);
    Node(const Node& node);
    Node& operator=(const Node &node);
    ~Node();
};

#endif
