#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void insertNode(Node*& head, int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if(head == nullptr){
        head = newNode;
    }else{
        Node* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;  // Traverse to the last node
        }
        temp->next = newNode;
    }
}

void printlist(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    Node* head = nullptr;
    int n;
    cout<<"Enter the number: ";
    cin >> n;

    int data;
    cout<<"Enter the data: "; 
    for(int i=0; i<n; i++){
        cin >> data;
        insertNode(head, data);
    }
    printlist(head);

    return 0;
}