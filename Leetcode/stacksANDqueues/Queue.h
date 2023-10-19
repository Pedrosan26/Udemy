#include "Node.h"
#include <iostream>

class Queue{

    private:
    Node* first;
    Node* Last;
    int length;

    public:
    Queue(int value){
        Node* newNode= new Node(value);
        first=newNode;
        Last=newNode;
        length=1;
    }

    void printQueue(){
        Node* temp=first;
        while(temp!=nullptr){
            std::cout<<temp->value<<" ";
            temp=temp->next;
        }
        std::cout<<std::endl;
    }

    void getFirst(){
        std::cout<<"First Value: "<<first->next<<std::endl;
    }

    void getLast(){
        std::cout<<"Last value: "<<Last->value<<std::endl;
    }

    void getLength(){
        std::cout<<"Length: "<<length<<std::endl;
    }
};
    