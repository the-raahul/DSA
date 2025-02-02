/* Basic Insertion */

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//   int data;
//   Node *next;
  
//   Node(int value){
//       data = value;
//       next = nullptr;
//   }
// };

// int main(){
//     Node *Head;
//     Head = nullptr;
//     int arr[]={1,2,3,4,5};
//     for(int i = 0; i<5; i++){
//         if(Head == nullptr){
//             Head = new Node(arr[i]);
//         }
//         else{
//             Node *temp;
//             temp = new Node(arr[i]);
//             temp -> next = Head;
//             Head = temp;
//         }
//     }
//     Node *temp = Head;
//     while(temp != nullptr){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }


//======================================================================================================================================================

// #include<iostream>
// using namespace std;
// class Node{
//   public:
//   int data;
//   Node *next;
//   Node(int value){
//       data = value;
//       next = nullptr;
//   }
// };
// int main(){
//     Node *Head;
//     Head = nullptr;
//     int arr[] = {1,2,3,4,5};
//     int s = sizeof(arr)/sizeof(arr[0]);
//     for(int i = 0; i<s; i++){
//         if(Head == nullptr){
//             Head = new Node(arr[i]);
//         }
//         else{
//             Node *temp;
//             temp = new Node(arr[i]);
//             temp -> next = Head;
//             Head = temp;
//         }
//     }
//     Node *temp;
//     temp = Head;
//     while(temp){                       // we can write directly temp instead of temp != nullptr;
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }



//===============================================================================================================================================================================

// Insertion  at the end;

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    
    Node(int value){
    data = value;
    next = nullptr;
    }
};

int main(){
    Node *head;
    Node *tail;
    tail = head = nullptr;
    int arr[] = {1,2,3,4,5};
    for(int i = 0; i<5; i++){
        if(head == nullptr){
            head = new Node(arr[i]);
            tail = head;
        }
        else{
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
    }
    Node *temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
}