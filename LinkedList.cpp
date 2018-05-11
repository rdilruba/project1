#include "LinkedList.h"

LinkedList::LinkedList() {
    this->length=0;

}

LinkedList::LinkedList(const LinkedList &list) {
    this->length=list.length;
    if(list.head) {
        this->head = new Node(*(list.head));
    }
    if(list.tail)
    {
        this->tail = new Node(*(list.tail));
    }
}

LinkedList& LinkedList::operator=(const LinkedList &list) {
    this->length=list.length;
    if(list.head) {
        delete (this->head);
        this->head = new Node(*(list.head));
    }
    if(list.tail)
    {
        delete (this->tail);
        this->tail = new Node(*(list.tail));
    }
    return *this;

}
void LinkedList::pushTail(Member data) {
    if(head) { //if head is full then look for tail
        if (tail) { //if tail full assign new one to tail, keep the old one as previous
            tail->next = new Node(data);
            tail = tail->next;

        } else { tail=new Node(data); // if tail is empty put new one to tail
            head->next=tail;} // then head->next becomes tail
    }else //if head is free
    {
        head=new Node(data); //put new one to head
    }

}

LinkedList::~LinkedList() {
    if(head)
        delete head;

}
