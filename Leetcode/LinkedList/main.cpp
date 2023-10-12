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

    list->~LinkedList();

}