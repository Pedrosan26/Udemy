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

        void printStack(){
            Node* temp=top;
            while(temp != nullptr){
                std::cout<<temp->value<<" ";
                temp=temp->next;
            }
            std::cout<<std::endl;
        }

        void getTop(){
            std::cout<<"Top value: "<<top->value<<std::endl;
        }

        void getHeight(){
            std::cout<<"Height: "<<height<<std::endl;
        }

        void push(int value){
            Node* newNode= new Node(value);
            newNode->next=top;
            top=newNode;
            height++;
        }

        int pop() {
            if(height==0) return 10101010;
            Node* temp=top;
            int poppedValue=top->value;
            top=top->next;
            delete temp;
            height--;
            return poppedValue;
        }
};