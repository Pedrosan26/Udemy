#include <iostream>
#include "Stack.h"
#include <limits>

int main(){

    Stack* myStack= new Stack(5);
    // myStack->getTop(); //regresa 5
    // myStack->getHeight(); // regresa 1
    // myStack->printStack(); //print the stacks

    //myStack->push(1); // regresa 1 5, pone el uno hasta arriba
    //myStack->printStack();

    std::cout<<"Popped value: "<<myStack->pop()<<std::endl; // imprimira el numero que este en el; topp
    std::cout<<"Popped value: "<<myStack->pop()<<std::endl; // como no hay nada que eliminar, entonces regresara el numero minimo que predetermine, 10101010

    

    return 0;
}