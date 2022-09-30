#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include "Linkedlist.h"
using namespace std;

Node::Node(int info,Node *next)
{ 
    this->info=info;
    this->next=NULL;
}


Linkedlist::Linkedlist()
{
   this->Head=NULL;
   this->Tail=NULL;
   cout<<"\nA linked list is created"<<endl;
   }


bool Linkedlist::isEmpty(){
   if(this->Head==NULL){
        cout<<"\nThe List is empty";
      return true;
   }
   else{return false;}
}


void Linkedlist::addToHead(int data){
   Node *newNode= new Node(data);
   if(isEmpty()){
      Head=newNode;
      Tail=newNode;
      
   }
   else{
      newNode->next=Head;
      Head=newNode;
   }
   cout<<"\nA data element is added to Head"<<endl;
}

void Linkedlist::addToTail(int info){
   Node *newNode= new Node(info);
   if(isEmpty()){
      Head=newNode;
      Tail=newNode;
   }
   else{
      Tail->next=newNode;
      Tail=newNode;
      
   }
   cout<<"\nA data element is added to Tail"<<endl;
}

void Linkedlist::add(int info,Node *ptr){
   Node *newNode= new Node(info);
   newNode->next=ptr->next;
   ptr->next=newNode;
   cout<<"\nThe data element is added to the list using add(); function"<<endl;
}

void Linkedlist::traverse(){
   Node* temp;
   temp=Head;
   cout<<"\nThe list is as follows:"<<endl;
   if(temp== NULL){
      cout<<"The list is empty. Nothing to show here. "<<endl;
   }
   while(temp!=NULL){
      cout<<" ["<<temp->info<<"]    ";
      temp=temp->next;
   }
 cout<<"\n\n";
}

void Linkedlist::removeFromHead(){
   Node* NodeToDelete=Head;
   Head=Head->next;
   delete NodeToDelete;
   cout<<"\nA data element is removed from Head"<<endl;
}
void Linkedlist::remove(int info){
   Node* temp;
   Node* prev;
   temp=Head;
   while(temp->info!=info){
      prev=temp;
      temp=temp->next;
      if (temp==NULL){break;}
   }
   if(temp==NULL){
      cout<<"\nCannot remove data!! The data is not present"<<endl;
   }
   
   else{
      if(temp==Head){

         removeFromHead();
         if(temp==Tail){Tail==NULL;}
      }
      else{
         if(Tail==temp){
            Tail=prev;
            cout<<"\nA node has been removed from the Tail"<<endl;
         }
         prev->next=temp->next;
         delete temp;
         cout<<info<<"\nData is removed from the list"<<endl;
      }
     
   }
}

Node* Linkedlist::retrieve(int info, Node* retnode){
   while(retnode!=NULL){
      if (retnode->info==info){
         break;
      }
      retnode=retnode->next;
   }
   return retnode;
}

bool Linkedlist::search(int info){
   Node* temp;
   temp=Head;
   while(temp!=NULL){
      if (temp->info==info){
         return true;
        break;
      }
      else{
      temp = temp ->next;
      }
   
   }  
   return false;
} 
