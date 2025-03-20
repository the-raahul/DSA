#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
};

void insert(Node*& head, int data){
    Node* newNode = new Node();
    newNode->data=data;
    newNode->next = nullptr;
    
    
    if(head==nullptr){
        head = newNode;
    }
    else{
        Node* temp = head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
    temp->next=newNode;
    }
}
void print(Node* head){
    Node* temp = head;
    while(temp!= nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    Node* head = nullptr;
    int n;
    cout<<"Enter the no. of node: ";
    cin>>n;
    int data;
    
    for(int i = 0; i<=n+3 ; i++){
        cin>>data;
        insert(head,data);
    }
    
    print(head);
}


