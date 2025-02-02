#include<stdio.h>
#include<stdlib.h>


struct Node{
    int key;
    struct Node* left;
    struct Node *right;
    int height;

};

int max(int a,int b);

int height (struct Node *N){
    if(N == nullptr){
        return 0;
    }
        return N-> height;
}

int max(int a,int b){
    return (a>b)? a:b;
}

struct Node*newNode(int key){
    struct Node* ndoe = (struct Node*) malloc (sizeof(struct Node));
    node->key = key;
    node->left = nullptr;
    node->right = nullptr;
    node->height = 1;
    return(node);
}


// right rotate

struct Node* rightRotate(struct Node*y){
    struct Node *x = 
}


// insert node 

struct Node* insertNode(struct Node,int key){
    insert
}