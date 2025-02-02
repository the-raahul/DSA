//1. Creating node statically''

// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node *next;
// };

// int main() {
//     Node AI;
//     AI.data = 4;      // Assign data to the node
//     AI.next = nullptr; // Set the next pointer to nullptr

//     cout << "Data: " << AI.data << endl;
//     return 0;
// }


 
// // 2. Creating node dynamically''

// #include<iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node *next;
// };

// int main() {
//     // Create a new node dynamically
//     Node *HEAD = new Node();
    
//     // Set the data and next pointer of the node
//     HEAD->data = 4;
//     HEAD->next = nullptr;

//     // Output the node's data to verify
//     cout << "Data in HEAD node: " << HEAD->data << endl;

//     // Clean up allocated memory
//     delete HEAD; // It's good practice to free memory after use

//     return 0;
// }


 
#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node(int value){  //using constructor
        data = value;
        next = NULL;
    }
};

int main() {
    // Create a new node dynamically
    Node *HEAD ;
    HEAD = new Node (4);

    // Output the node's data to verify
    cout << "Data in HEAD node: " << HEAD->data << endl;

    // Clean up allocated memory
    delete HEAD; // It's good practice to free memory after use

    return 0;
}

  
