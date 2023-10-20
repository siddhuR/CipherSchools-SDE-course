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

void buildTree(Node * &root) {
    // this is the starrt of the creation of a binary tree
    
    int var;
    cout<<"Enter the value ";
    cin>>var;

    // if the user inputs -1, that means there is no node present over there

    if(var==-1) return;

    root = new Node(var);

    //cout<<"now enter teh data which you want to be to the left of "<<var;
    buildTree(root->left);
    //cout<<"now enter teh data which you want to be to the right of "<<var;
    buildTree(root->right);
}

// first we will look at pre-order transversal

// preorder transversal implies that we first transverse the node than the elements left of it and then the elements to the right of it

void printPreordertransversal(Node * root)
{
    // first we print n,l,r

    if (root==NULL) return;

    cout<<root->data<<" ";
    printPreordertransversal(root->left);
    printPreordertransversal(root->right);
}

void printInordertransversal(Node *root) {
    // first we print l,n,r

    if(root == NULL) return;

    printInordertransversal(root->left);
    cout<<root->data<<" ";
    printInordertransversal(root->right);

}

void printPostordertransversal(Node *root) {
    // first we print l,n,r

    if(root == NULL) return;

    printPostordertransversal(root->left);
    printPostordertransversal(root->right);
    cout<<root->data<<" ";

}

int main() {
    /// now since we have created a node let us start with a creation of a binary tree
    
    Node * root = NULL;

    buildTree(root);

    // 5 9 1 -1 -1 7 -1 -1 3 2 -1 -1 5 9 -1 -1 10 -1 -1
    
    cout<<"The elements transversad in preOrder transversal is "<<endl;
    printPreordertransversal(root);

    cout<<endl<<"The elements transversad in InOrder transversal is "<<endl;
    printInordertransversal(root);

    cout<<endl<<"The elements transversad in postOrder transversal is "<<endl;
    printPostordertransversal(root);

    return 0;


}