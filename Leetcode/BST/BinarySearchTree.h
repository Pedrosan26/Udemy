#include "Node.h"
// BinarySearchTree class
class BinarySearchTree{
    
    public:
        Node*root;

        BinarySearchTree(){ 
            root=nullptr;    // constructor
        }

        bool insert(int value){ // insert method
            Node* newNode= new Node(value); // create a new node
            if(root==nullptr){ // if the tree is empty
                root=newNode; // set the root to the new node
                return true;
            }
            Node* temp=root;

            while(true){ // while we don't find a place to insert the new node
               if(newNode->value==temp->value){ // if the value already exists
                return false; // return false
               } 

                if(newNode->value < temp->value){ // if the value is less than the current node
                    if(temp->left==nullptr){ // if the left child is empty
                        temp->left = newNode; // set the left child to the new node
                        return true;
                    }
                    temp=temp->left; // else go to the left child
                }else{
                    if(temp->right==nullptr){ // if the right child is empty
                        temp->right=newNode; // set the right child to the new node
                        return true;
                    }
                    temp=temp->right; // else go to the right child
                }



            }
        }

        bool contains(int value){ // contains method
            if(root==nullptr) return false; // if the tree is empty return false
            Node* temp=root;
            while(temp!=nullptr){ // while we don't find the value
                if(temp->value > value){ // if the value is less than the current node
                    temp=temp->left; // go to the left child
                }
                else if(temp->value<value){ // if the value is greater than the current node
                    temp=temp->right; // go to the right child
                }

                else{
                    return true; // else return true
                }
                
            }
            return false; // if we don't find the value return false
        }


};