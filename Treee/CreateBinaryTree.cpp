/* This is the code for Binary Tree Creation and printing the preOrder, InOrder and postOrder

 IN THIS QUESTION WE ARE GOING TO CREATE THE TREE FROM THE LEFT SIDE THEN THE RIHGT SIDE;;;;*/


#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *left,*right;

    Node(int value){
        data = value;
        left = right = nullptr;
    }
};

void PreOrder(Node *root){
    if(root == nullptr)
    return;
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}

void InOrder(Node* root){
    if(root == nullptr)
    return;
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

void PostOrder(Node *root){
    if(root==nullptr)
    return ;
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}



Node *BinaryTree(){
    int x;
    cin>>x;
    if(x== -1)
    return nullptr;

    Node *temp = new Node(x);
    // Left side create;
    cout<<"Enter the left child of "<<x<<" :";
    temp->left = BinaryTree();
    // Right side create
    cout<<"Enter the right child of "<<x<<" :";
    temp->right = BinaryTree();

    return temp;
}

int main(){

    cout<<"Enter the root Node: "<<endl;
    Node *root;
    root = BinaryTree();  // tree creation code;

    //PreOrder Print;
    cout<<"PreOrder : ";
    PreOrder(root);
    cout<<endl;
    // Inorder 
    cout<<"InOrder : ";
    InOrder(root);
    cout<<endl;

    cout<<"PostOrder : ";
    PostOrder(root);
    cout<<endl;


}

