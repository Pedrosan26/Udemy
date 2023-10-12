#ifndef NODE_H
#define NODE_H

class Node{
    public:
        int value;
        Node* next;

    Node(int value){
        this->value=value;
        next=nullptr;

    }
};

#endif // NODE_H