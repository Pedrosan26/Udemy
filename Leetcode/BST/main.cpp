#include "BinarySearchTree.h"
#include <iostream>

int main(){

    BinarySearchTree* myBST= new BinarySearchTree();

    myBST->insert(47);
    myBST->insert(21);
    myBST->insert(76);
    myBST->insert(18);
    myBST->insert(52);
    myBST->insert(82);

    myBST->insert(27);
    

    std::cout<<myBST->root->left->right->value<<std::endl;

    std::cout<<"Contains 1: "<<myBST->contains(1)<<std::endl;
    std::cout<<"Contains 27: "<<myBST->contains(27)<<std::endl;
    

    return 0;
}