#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node *left,*right;

    Node(int value){
        data = value;
        left = right = nullptr;

    }
};
int main(){
    int x;
    cout<<"Enter the number: "<<endl;
    cin>>x;
    int first,second;
    queue<Node*>q;
    Node *root = new Node(x);
    q.push(root);

    // Build the Binary Tree
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        cout<<"Enter the left value of "<<temp->data<<" : ";
        cin>>first;
        if(first !=1){
            temp -> left = new Node(first);
            q.push(temp->left);

        }
        cout<<"Entern the value of "<<temp->data;
    }
}