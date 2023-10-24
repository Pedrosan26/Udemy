#include <iostream>
#include "Graph.h"

int main(){

    Graph* myGraph= new Graph();

    myGraph->addVertex("A");
    myGraph->printGraph();

    return 0;
}