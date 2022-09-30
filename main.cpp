#include <iostream>
#include "Linkedlist.h"

using namespace std;

int main() {
    Linkedlist L1;
    
    cout<<"Traversing an empty linked list"<<endl;
    L1.traverse();

    cout<<"Adding 5 to the head"<<endl;
    L1.addToHead(5);
    
    cout<<"Adding 34 to the tail of the linked list"<<endl;
    L1.addToTail(34);
    
    cout<<"Adding 5 using the add function "<<endl;
    L1.add(5,L1.Tail);
    
    cout<<"Traversing through the linked list"<<endl;
    L1.traverse();
    
    cout<<"Adding 45 to the head of the linked list"<<endl;
    L1.addToHead(45);
    
    cout<<"Adding 125 to the tail of the linked list"<<endl;
    L1.addToTail(125);
    
    cout<<"Traversing through the linked list"<<endl;
    L1.traverse();
    
    cout<<"Removing an element from the head of the linkedlist"<<endl;
    L1.removeFromHead();
    
    cout<<"Perfoming removal of a desired data"<<endl;
    L1.remove(5);
    
    cout<<"Traversing through the linked list"<<endl;
    L1.traverse();
    
    cout<<"Searching an element through the linked list"<<endl;
    if (L1.search(34)==1){
        cout<<"the data is found in the linked list"<<endl;
    }
    else {
        cout<<"The data could not be located"<<endl;
    }

     cout<<"\nSearching an element through the linked list"<<endl;
   if (L1.search(96)==1){
        cout<<"the data is found in the linked list"<<endl;
    }
    else {
        cout<<"The data could not be located"<<endl;
    }
    
    cout<<"Adding an element to the head of the linked list"<<endl;
    L1.addToHead(23);
    
    cout<<"\nRetrieving 23 from the linkedlist \nThe adress of the data is  "<<L1.retrieve(23,L1.Head)<<endl;

}