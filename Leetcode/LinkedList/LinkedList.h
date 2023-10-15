#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>

#include "Node.h"

class LinkedList{
    private:
        Node* head; //First element
        Node* tail; //Last element
        int length; //Length of the list
 
    public:
    LinkedList(int value){
        Node* newNode=new Node(value);  //Create a new node
        head=newNode;                 //Head and tail are the same
        tail=newNode;              //because there is only one element
        length=1;              //Length is 1
    }

    ~LinkedList(){
        Node* temp =head; //Create a temp node
        while(head!=nullptr){ //While head is not null
            head=head->next; //Head is the next element
            delete temp; //Delete the temp node
            temp=head; //Temp is the next element
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
        Node* newNode = new Node(value); //Create a new node
        if (length==0){ //If there is no elements
            head=newNode;  //Head and tail are the same
            tail=newNode; //because there is only one element
        }
        else{
            tail->next=newNode; //The last element is the new node
            tail=newNode; //The tail is the new node
        }
        length++;

    }

    void print(){
        Node* temp=head;
        while(temp !=nullptr){ //While temp is not null
            std::cout<<temp->value<<" ";   //Print the value
            temp=temp->next; //Temp is the next element
        }
        std::cout<<std::endl;
    }

    void deleteLast(){
        Node* temp=head; //Create a temp node
        if(head==nullptr){ //If there is no elements 
            std::cout<<"NO hay elementos a borrar"<<std::endl; //Print this
        }
        else if(head==tail){ //If there is only one element
            delete head; //Delete the head 
            head=nullptr; //Head is null
            tail=nullptr; //Tail is null
        }
        else{
        while(temp->next!=tail){ //While the next element is not the tail
            temp=temp->next; //Temp is the next element
        }
        delete tail; //Delete the tail
        tail=temp; //Tail is the previous element
        temp->next=nullptr; //The next element is null
        }
        length --;
    }
    
    void prepend(int value){

        Node* newNode= new Node(value); //Create a new node
        if(length==0){ //If there is no elements
            head=newNode; //Head and tail are the same
            tail=newNode; 
        }else{
        newNode->next=head; //The next element is the head
        head=newNode; //The head is the new node
        }
        length++;
    }


    void deleteFirst(){
        Node* temp=head; //Create a temp node
        if(length==0){ //If there is no elements
            return;
        }
        else if(head==tail){ //If there is only one element
            head=tail=nullptr; //Head and tail are null
        }else{ 
        head=head->next; //Head is the next element
        }
        delete temp; //Delete the temp node
        length--;
    }

    Node* get(int index){
        if(index<0||index>=length){
            return nullptr;
        }
        Node* temp = head;
        for(int i=0;i<index;i++){
            temp=temp->next;
        }
        return temp;
    }

    bool set(int value,int index){
        Node* temp=get(index);
        if(temp)
            temp->value=value;
            return true;
        return false;
    }

    bool insert(int value,int index){
        if(index<0|| index>length) return false;
        else if(index==0){
            prepend(value);
            return true;
        }else if (index==length){
            append(value);
            return true;
        }else{
            Node* newNode= new Node(value);
            Node* temp= get(index-1);

            newNode->next=temp->next;
            temp->next=newNode;
            length++;
            return true;
        }
    }

    void deleteNode(int index){
        if(index<0|| index>= length) return;

        if(index==0){
            return deleteFirst();
        }else if( index==length-1){
            return deleteLast();
        }else{
            Node* prev=get(index-1);
            Node* temp=prev->next;

            prev->next=temp->next;
            delete temp;
            length --;

        }
    }   

    void reverse(){
        Node* temp=head;
        head=tail;
        tail=temp;

        Node* after=temp->next;
        Node* before=nullptr;

        for(int i=0;i<length;i++){
            after=temp->next;
            temp->next=before;
            before=temp;
            temp=after;
        }
    }
    

};


#endif