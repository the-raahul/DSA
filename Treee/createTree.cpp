/* CREATING TREE LEVEL WISE : */


// #include<iostream>
// #include<queue>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* left , *right;
//     Node(int value){
//         data = value;
//         left = right = NULL;

//     }
// };

// int main(){

//     int x;
//     cout<<"Enter the root element : ";
//     cin>>x;
//     int first, second;
//     queue<Node*>q;
//     Node *root = new Node(x);
//     q.push(root);


//     // Build the Binary Tree;
//     while(!q.empty()){
//         Node *temp = q.front();
//         q.pop();
//         cout<<"Enter the left child of "<<temp->data<<" : ";
//         cin>>first; // left node ki value;
//         // left node;
//         if(first!=-1){
//             temp->left = new Node(first);
//             q.push(temp->left);

//         }
//         // right node

//         cout<<"Enter the Right child of "<<temp->data<<" : ";
//         cin>>second;
//         if(second != -1){
//             temp ->right = new Node(second);
//             q.push(temp->right);
//         }
//     }



///===============================================================================================

//  GPT CODE
// #include<iostream>
// #include<queue>
// using namespace std;

// class Node {
//     public:
//     int data;
//     Node* left, *right;

//     Node(int value) {
//         data = value;
//         left = right = NULL;
//     }
// };

// int main() {

//     int x;
//     cout << "Enter the root element: ";
//     cin >> x;
    
//     if (x == -1) {
//         cout << "Tree is empty." << endl;
//         return 0;
//     }
    
//     int first, second;
//     queue<Node*> q;
//     Node *root = new Node(x);
//     q.push(root);

//     // Build the Binary Tree
//     while (!q.empty()) {
//         Node *temp = q.front();
//         q.pop();  // pop the front element after processing

//         // left node
//         cout << "Enter the left child of " << temp->data << ": ";
//         cin >> first;
//         if (first != -1) {
//             temp->left = new Node(first);
//             q.push(temp->left); // addres is pushed
//         }

//         // right node
//         cout << "Enter the right child of " << temp->data << ": ";
//         cin >> second;
//         if (second != -1) {
//             temp->right = new Node(second);
//             q.push(temp->right);
//         }
//     }

//     return 0;
// }



// // NEO COLAB QUESTION  LEVEL ORDER QUESTION with QUEUE

#include<iostream>
#include<queue>
using namespace std;

class Node {
public:
    int data;
    Node *left, *right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

Node* levelOrderIns() {
    int x;
    cin >> x;
    if (x <= 0) {
        return nullptr;
    }

    Node* root = new Node(x);
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();
        
        // Input for the left child
        cin >> x;
        if (x > 0) {
            current->left = new Node(x);
            q.push(current->left);
        }
        
        // Input for the right child
        cin >> x;
        if (x > 0) {
            current->right = new Node(x);
            q.push(current->right);
        }
    }
    return root;
}

void inorder(Node* root) {
    if (root == nullptr) {
        return;
    }

    inorder(root->left);       // Traverse left subtree
    cout << root->data << " "; // Print current node's data
    inorder(root->right);      // Traverse right subtree
}

int main() {
    Node* root = levelOrderIns(); // Create tree from input
    inorder(root);                // Perform inorder traversal
    return 0;
}



// // You are using GCC NOECOLAB QUESTON REVERSE INORDER WITHOUT QUEUE
// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* left;
//     Node* right;

//     Node(int v) : data(v), left(nullptr), right(nullptr) {}
// };

// Node* insertLevelOrder(int arr[], Node* root, int i, int n) {
//     if (i < n) {
//         Node* temp = new Node(arr[i]);
//         root = temp;

//         root->left = insertLevelOrder(arr, root->left, 2 * i + 1, n);
//         root->right = insertLevelOrder(arr, root->right, 2 * i + 2, n);
//     }
//     return root;
// }

// void printInorder(Node* node) 
// {
//    //Type your code here
//    if(node==nullptr){
//        return;
//    }
//    printInorder(node->left);
//    cout<<node->data<<" ";
//    printInorder(node->right);
// }

// void p(Node* node)
// {
//    if(node==nullptr){
//        return;
//    }
   
//    p(node->right);
//    cout<<node->data<<" ";
//    p(node->left);
   
    
    
// }

// int main() {
//     int n;
//     cin >> n;

//     int* arr = new int[n];
//     for (int i = 0; i < n; ++i) {
//         cin >> arr[i];
//     }

//     Node* root = nullptr;
//     root = insertLevelOrder(arr, root, 0, n);

//     printInorder(root);
//     cout << endl;
//     p(root);
//     cout<<endl;
    
    
    
//     delete[] arr;

//     return 0;
// }