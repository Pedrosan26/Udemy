class Node{
    public:
        int value;
        Node* left;
        Node *right;

        Node(int value){
            this->value=value;
            left=nullptr;
            right=nullptr;
        }
};