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







// Single File Programming Question
// Problem Statement



// Alice is preparing for a coding competition and wants to practice her skills with linked lists. She decides to write a program that allows her to create a linked list by inserting elements at the front. 



// Help Alice with her task.



// Company tags: HCL

// Input format :
// The first line of input consists of an integer n, representing the number of elements to be inserted.

// The second line of input consists of n space-separated integers, representing the elements to be inserted in the linked list.

// The third line of input consists of an integer m, representing the value to be inserted at the front of the linked list.

// Output format :
// The first line of output displays "Created Linked list: " followed by the elements of the linked list.

// The second line of output displays "Final List: " followed by the elements of the linked list after inserting the new element at the front.



// Refer to the sample output for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ n ≤ 10

// 1 ≤ elements, m ≤ 100

// Sample test cases :
// Input 1 :
// 5
// 6 5 4 3 2
// 1
// Output 1 :
// Created Linked list: 2 3 4 5 6 
// Final List: 1 2 3 4 5 6 
// Input 2 :
// 4
// -10 20 -30 40
// 5
// Output 2 :
// Created Linked list: 40 -30 20 -10 
// Final List: 5 40 -30 20 -10 





#include <iostream>
using namespace std;

// Define the structure for a Node in the linked list
struct Node {
    int data;       // Data part of the node
    Node* next;     // Pointer to the next node
};

// Function to insert a new node at the front of the linked list
void insertAtFront(Node*& head, int data) {
    Node* newNode = new Node(); // Create a new node
    newNode->data = data;       // Set the data
    newNode->next = head;       // Link the new node to the current head
    head = newNode;             // Update head to point to the new node
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head; // Start from the head
    while (temp != nullptr) { // Traverse until the end of the list
        cout << temp->data << " "; // Print the data
        temp = temp->next; // Move to the next node
    }
}

int main() {
    Node* head = nullptr; // Initialize head to nullptr
    int n;

    // Read the number of elements to be inserted
    cin >> n;
    int data;

    // Insert n elements into the linked list
    for (int i = 0; i < n; i++) {
        cin >> data; // Read each element
        insertAtFront(head, data); // Insert at the front
    }

    // Output the created linked list
    cout << "Created Linked list: ";
    printList(head); // Print the linked list
    cout << endl; // New line after printing the list

    // Read the value to be inserted at the front
    int m;
    cin >> m;
    insertAtFront(head, m); // Insert the new element at the front

    // Output the final linked list
    cout << "Final List: ";
    printList(head); // Print the updated linked list
    cout << endl; // New line after printing the list

    return 0; // End of the program
}
