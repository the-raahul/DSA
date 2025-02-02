// /*https://www.youtube.com/watch?v=Ah-ZDJf9QW0&t=1576s*/


//// hit and trial code

// #include<iostream>
// #include<stack>
// using namespace std;
// class Queue{
//     int *arr;
//     int front,rear,size;
//     public:
// // constructor
//     Queue(int n){
//         arr = new int[n];
//         size = n;
//         front = rear = -1;
//     }
//     // queue is empty or not  
//     bool isEmpty(){
//         return front == -1;
//     }

//     // Queue is full or not 
//     bool isFull(){
//         return rear == size -1;
//     }
    
//     //push element in the queue
//      void push(int x){
//         // three condition should check empty,full, check

//         // empty
//         if(isEmpty()){
//             cout<<"Pushed "<<x<<" into the queue "<<endl;
//             front = rear = 0;
//             arr[0]= x;
//             return;

//         }
     
//         // full
//         else if(isFull()){
//             cout<<"Queue is Overflow";
//             return;
//         }

//         else{
//             rear = rear +1;
//             arr[rear] = x;
//             cout<<"Pushed "<<x<<" into the queue "<<endl;

//         }
     

//     }
//         // pop element , starting 
//         void pop(){

//             if(isEmpty()){
//                 cout<<"Queue Underflow";
//                 return;

//             }
//             //pop kar do
//             else{

            
//             if(front == rear){
//               cout<<"Pushed "<<arr[front]<<" into the queue ";
//               front = rear = -1;

//             }

//             else {
//                 cout<<"Pushed "<<arr[front]<<" into the queue ";

//                 front = front +1;
//             }
//             }
//         }

//     // start mein konsa element rakha hai;
//     int start(){
//         if(isEmpty()){
//             cout<<"Queue is Empty"<<endl;
//             return -1;

//         }
//         else
//         return arr[front];
//     }

// };

// int main(){
//     Queue q(5);
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     q.pop();
//     q.pop();
//     q.pop();

//     // cout<<q.start()<<endl;/
//     int x = q.start();
//     if(!q.isEmpty()){
//         cout<<x<<" ";
//     }
// }



// #include<iostream>
// using namespace std;

// class Queue {
//     int *arr;
//     int front, rear, size;

// public:
//     // Constructor
//     Queue(int n) {
//         arr = new int[n];
//         size = n;
//         front = rear = -1;
//     }

//     // Check if the queue is empty
//     bool isEmpty() {
//         return front == -1;
//     }

//     // Check if the queue is full
//     bool isFull() {
//         return rear == size - 1;
//     }

//     // Push element into the queue
//     void push(int x) {
//         if (isFull()) {
//             cout << "Queue is Overflow" << endl;
//             return;
//         }

//         if (isEmpty()) {
//             cout << "Pushed " << x << " into the queue" << endl;
//             front = rear = 0;
//             arr[0] = x;
//         } else {
//             rear++;
//             arr[rear] = x;
//             cout << "Pushed " << x << " into the queue" << endl;
//         }
//     }

//     // Pop element from the queue
//     void pop() {
//         if (isEmpty()) {
//             cout << "Queue Underflow" << endl;
//             return;
//         }

//         cout << "Popped " << arr[front] << " from the queue" << endl;

//         if (front == rear) {
//             // Queue is now empty after popping
//             front = rear = -1;
//         } else {
//             front++;
//         }
//     }

//     // Get the front element
//     int start() {
//         if (isEmpty()) {
//             cout << "Queue is Empty" << endl;
//             return -1;
//         }
//         return arr[front];
//     }

//     // Method to manually free the allocated memory
//     void cleanup() {
//         delete[] arr;
//     }
// };

// int main() {
//     Queue q(5);
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     q.pop(); // Pops 1
//     q.pop(); // Pops 2
//     q.pop(); // Pops 3
//     /*  // this for checking the difference bw simple queue and circular queue . this thorw overflow but down one not
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);

//     q.pop(); // Pops 1
//     q.push(5); // Adds 5
//     q.push(6); // This should indicate overflow

//     q.pop(); // Pops 1
//      */
//     int x = q.start();
//     if (!q.isEmpty()) {
//         cout << "Front element: " << x << " "; // Only output if not empty
//     }

//     // Cleanup manually to prevent memory leak
//     q.cleanup();

//     return 0;
// }



   




// //// C I R C U L A R 

// #include<iostream>
// using namespace std;

// class CircularQueue {
//     int *arr;
//     int front, rear, size;

// public:
//     // Constructor
//     CircularQueue(int n) {
//         arr = new int[n];
//         size = n;
//         front = rear = -1;
//     }

//     // Check if the queue is empty
//     bool isEmpty() {
//         return front == -1;
//     }

//     // Check if the queue is full
//     bool isFull() {
//         return (rear + 1) % size == front; // Circular condition
//     }

//     // Push element into the queue
//     void push(int x) {
//         if (isFull()) {
//             cout << "Queue is Overflow" << endl;
//             return;
//         }
//         if (isEmpty()) {
//             front = rear = 0;
//             arr[rear] = x;
//         } else {
//             rear = (rear + 1) % size; // Circular increment
//             arr[rear] = x;
//         }
//         cout << "Pushed " << x << " into the queue" << endl;
//     }

//     // Pop element from the queue
//     void pop() {
//         if (isEmpty()) {
//             cout << "Queue Underflow" << endl;
//             return;
//         }
//         cout << "Popped " << arr[front] << " from the queue" << endl;
//         if (front == rear) {
//             front = rear = -1; // Queue is now empty
//         } else {
//             front = (front + 1) % size; // Circular increment
//         }
//     }

//     // Get the front element
//     int start() {
//         if (isEmpty()) {
//             cout << "Queue is Empty" << endl;
//             return -1;
//         }
//         return arr[front];
//     }

//     // Cleanup method to free allocated memory
//     void cleanup() {
//         delete[] arr;
//     }
// };

// int main() {
//     CircularQueue cq(5);
//     cq.push(1);
//     cq.push(2);
//     cq.push(3);
//     cq.push(4);

//     cq.pop(); // Pops 1
//     cq.push(5); // Adds 5
//     cq.push(6); // This should indicate overflow

//     cq.pop(); // Pops 1
//     cout << "Front element: " << cq.start() << endl; // Should show 2

//     // Cleanup manually to prevent memory leak
//     cq.cleanup();

//     return 0;
// }

