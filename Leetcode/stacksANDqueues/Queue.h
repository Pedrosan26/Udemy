#include "Node.h"
#include <iostream>

class Queue{ //Queue class

    private:  
    Node* first;  
    Node* Last; 
    int length;

    public:
    Queue(int value){ //Constructor
        Node* newNode= new Node(value); 
        first=newNode;
        Last=newNode;
        length=1;
    }

    void printQueue(){ //Print the queue
        Node* temp=first; //Create a temp node
        while(temp!=nullptr){ //While temp is not null
            std::cout<<temp->value<<" "; //Print the value
            temp=temp->next; //Temp is the next element
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
    