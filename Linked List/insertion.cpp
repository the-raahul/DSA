// #include <iostream>
// using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node *next;
    
//     Node(int value){
//         data = value;
//         next = NULL;
//     }
// };


// int main()
// {
//     Node A1(4);  //linked list is created statically;

//     return 0;
// }

//----------------------------------------------------------------------------------------------------------
// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int Data;
//     Node *Next;
    
//     Node(int value) {
//         Data = value;
//         Next = NULL;
//     }
// };

// int main() {
//     Node *Head = new Node(4); // Initialize Head with a new Node
//     cout << Head->Data << endl; // Access the Data member
//     cout << Head->Next << endl; // Access the Next member (should print 0 or NULL)
    
//     return 0;
// }



// #include <iostream>
// using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node *next;
    
//     Node(int value)
//     {
//         data = value;
//         next = NULL;
//     }
// };


// int main()
// {
//     Node *Head; 
//     Head = new Node(4);  //linked List is created dynamically;
//     cout << Head->data<<endl;
//     cout << Head->next;

//     // return 0;
// }

//---------------------------------------------------------------------------------------------------------------------------------------------
// ----------------------------------------------------------------------------------------------------------------------------------------------------

 
// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// int main() {
//     Node* head = nullptr;
//     Node* tail = nullptr;
//     Node* temp = nullptr;
//     Node* newNode = nullptr;
    
//     char ch;
//     int value;
    
//     do {
//         // Allocate memory for new node
//         newNode = new Node();
        
//         // Input data for the node
//         cout << "Enter value: ";
//         cin >> value;
//         newNode->data = value;
//         newNode->next = nullptr;
        
//         // Insert the node into the linked list
//         if (head == nullptr) {
//             head = newNode;
//             tail = newNode;
//         } else {
//             tail->next = newNode;
//             tail = newNode;
//         }
        
//         // Ask user if they want to continue
//         cout << "Y - continue, N - exit: ";
//         cin >> ch;
        
//     } while (ch == 'Y' || ch == 'y');
    
//     // Print the linked list
//     temp = head;
//     cout << "Linked list contents: ";
//     while (temp != nullptr) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
    
//     // Clean up the linked list
//     temp = head;
//     Node* nextNode;
//     while (temp != nullptr) {
//         nextNode = temp->next;
//         delete temp;
//         temp = nextNode;
//     }

//     return 0;
// }


///-----------------------------------------------------------------------------------------------------------------------


/* 1. i n s e r t i o n and  d i s p l a y*/



// #include <iostream>   
// using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node *next;
    
//     Node(int value)
//     {
//         data = value;
//         next = NULL;
//     }
// };
// int main()
// {
//     Node *Head;
//     Head = NULL;
//     int arr[] ={10,20,30,40,50};
//     // INSERT THE NODE AT THE BEGNING
    
//     // LINKED LIST DOSENT EXIST
//     for(int i = 0; i<5; i++){
//      if(Head == NULL){
//          Head = new Node(arr[i]);
         
//      }

//      else // LINKED LIST EXIST
//      {
//          Node *temp;
//          temp = new Node(arr[i]);
//          temp -> next = Head;
//          Head = temp;
//      }
//     }
//     Node *temp = Head;// Naya pointer jo head to point kare
//     while (temp){ 
//     // while(temp != NULL){
//         cout << temp -> data<<" ";
//         temp = temp -> next;
//     }
// }


/* 2. i n s e r t i o n at  L A S T */


#include <iostream>   
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
int main()
{
    Node *Head;
    Head = NULL;
    int arr[] ={10,20,30,40,50};

    for(int i = 0; i<5; i++){
     if(Head == NULL){
         Head = new Node(arr[i]);
         
     }

     else
     {
         Node *temp;
         temp = new Node(arr[i]);
         temp -> next = Head;
         Head = temp;
     }

    }
    
    Node *temp = Head;
    while (temp){ 
    // while(temp != NULL){
        cout << temp -> data<<" ";
        temp = temp -> next;
    }
}





















































































































































































































