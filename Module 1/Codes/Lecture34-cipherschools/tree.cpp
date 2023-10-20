#include<iostream>
using namespace std;

// this is how a node of a tree is defined
class Node
{
    public:
    int data;
    Node * left;
    Node * right;
    
    //Note : since each node has the address to the node corresponding to the left and right of the root, we are able to access the whole tree from the root node

    Node(int data)
    {
        this->data = data;
        this->left= NULL;
        this->right = NULL;
    }
};

void buildTree(Node * root) {
    // this is the starrt of the creation of a binary tree
    
    int var;
    cout<<"Enter the value ";
    cin>>var;

    // if the user inputs -1, that means there is no node present over there

    if(var==-1) return;

    root = new Node(var);

    cout<<"now enter teh data which you want to be to the left of "<<var;
    buildTree(root->left);
    cout<<"now enter teh data which you want to be to the left of "<<var;
    buildTree(root->right);
}

int main() {
    /// now since we have created a node let us start with a creation of a binary tree
    
    Node * root;

    buildTree(root);

    return 0;


}