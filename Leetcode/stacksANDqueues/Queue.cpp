#include "Queue.h"
#include <iostream>

int main(){

    Queue* myQueue=new Queue(6);

    myQueue->getFirst();
    myQueue->getLast();
    myQueue->getLength();

    myQueue->printQueue();

    return 0;
}