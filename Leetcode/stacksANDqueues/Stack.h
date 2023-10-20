#include "Node.h"

class Stack{
    private:
        Node* top;
        int height;
    public:
        Stack(int value){
            Node* newNode= new Node(value);
            top=newNode;
            height=1;
        }

        void printStack(){ //Print the stack
            Node* temp=top; //Create a temp node
            while(temp != nullptr){  //While temp is not null
                std::cout<<temp->value<<" "; //Print the value
                temp=temp->next; //Temp is the next element
            }
            std::cout<<std::endl;
        }

        void getTop(){
            std::cout<<"Top value: "<<top->value<<std::endl; 
        }

        void getHeight(){
            std::cout<<"Height: "<<height<<std::endl;
        }

        void push(int value){ //Push a value
            Node* newNode= new Node(value); //Create a new node
            newNode->next=top; //The next element is the top
            top=newNode; //The top is the new node
            height++; //Increase the height
        }

        int pop() {
            if(height==0) return 10101010; //If the stack is empty return 10101010
            Node* temp=top; //Create a temp node
            int poppedValue=top->value; //Save the value of the top
            top=top->next; //The top is the next element
            delete temp; //Delete the temp node 
            height--; //Decrease the height
            return poppedValue; //Return the value of the top
        }
};