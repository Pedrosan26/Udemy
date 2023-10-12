#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>

#include "Node.h"

class LinkedList{
    private:
        Node* head;
        Node* tail;
        int length;

    public:
    LinkedList(int value){
        Node* newNode=new Node(value); 
        head=newNode; 
        tail=newNode;
        length=1;
    }

    ~LinkedList(){
        Node* temp =head;
        while(head!=nullptr){
            head=head->next;
            delete temp;
            temp=head;
        }
    }

    void getHead(){
        std::cout<<"Head: "<<head->value<<std::endl;
    }

    void getTail(){
        std::cout<<"Tail: "<<tail->value<<std::endl;
    }

    void getLength(){
        std::cout<<"Length: "<<length<<std::endl;
    }

    void append(int value){
        Node* newNode = new Node(value);
        if (length==0){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
        length++;

    }

    void print(){
        Node* temp=head;
        while(temp !=nullptr){
            std::cout<<temp->value<<" ";  
            temp=temp->next;
        }
        std::cout<<std::endl;
    }

    void deleteLast(){
        Node* temp=head;
        if(head==nullptr){
            std::cout<<"NO hay elementos a borrar"<<std::endl;
        }
        else if(head==tail){
            delete head;
            head=nullptr;
            tail=nullptr;
        }
        else{
        while(temp->next!=tail){
            temp=temp->next;
        }
        delete tail;
        tail=temp;
        temp->next=nullptr;
        
        
        }
        length --;
    }

};


#endif