#include "LinkedList.h"

int main(){

    LinkedList* list;
    LinkedList(10);
    list->append(15);
    list->append(14);
    list->append(13);
    list->append(34);
    list->getHead();
    list->getTail();
    list->getLength();
    list->print();
    list->deleteLast();
    list->getTail();
    list->getLength();
    list->print();

    list->prepend(5);
    list->prepend(4); //Number 4 should be the first value but 
    list->deleteFirst(); // we delete number 4 so it wont show 
    list->set(4,3); 
    list->print();
    std::cout<<list->get(2)->value;


    list->~LinkedList();

}