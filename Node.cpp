#include "Node.h"
#include <stack>

Node::Node(Member data){
    this->data = data;
    this->next = NULL;
}

Node::Node(const Node& node){
    this->data = node.data;
    if(node.next) {
        this->next = new Node(*(node.next));
    }
}

Node& Node::operator=(const Node &node){
    this->data = node.data;
    if(node.next) {
        delete this->next;
        this->next = new Node(*(node.next));
    }
    return *this;
}

Node::~Node(){
    if (next) {
        delete next;
    }
}