#ifndef Linkedlist_h
#define Linkedlist_h

#include <iostream>


class Node {
    public:
    int info;
    Node *next;


    Node(int info=0,Node *next=NULL);
    
};

class Linkedlist {
    public:

    Node* Head;
    Node* Tail;
    Linkedlist ();


    bool isEmpty();
    void addToHead(int data);
    void addToTail(int data);
    void add(int data, Node* ptr);
    void removeFromHead();
    void remove(int data);
    Node* retrieve (int data, Node* ptr);
    bool search(int data);
    void traverse ();



};
#endif  