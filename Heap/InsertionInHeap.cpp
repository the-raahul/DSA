// #include<iostream>
// using namespace std;

// class MaxHeap{

//     int *arr;
//     int size; // total element in heap;
//     int total_size;

//     public:
//     MaxHeap(int n){
//         arr = new int[n];
//         size = 0;
//         total_size = n;

//     }

//     // insert into the heap
//     void insert(int value){

//         // if heap size is available or not
//         if(size == total_size){
//             cout<<"Heap is Overflow\n";
//             return;
//         }

//         arr[size] = value;
//         int index = size;
//         size++;

//         // compare it with parent 

//         while (index>0 && arr[(index-1)/2]<arr[index]){
//             swap(arr[index],arr[(index-1)/2]);
//             index = (index-1)/2;

//         };
        
//         cout<<arr[index]<<" is inserted into the heap;"<<endl;



//     }


//     void print(){
//         for(int i = 0; i<size; i++){
//             cout<<arr[i]<<" ";
//             // cout<<endl;
//         }
//     }
// };
// int main(){
//     MaxHeap H1(6);
//     H1.insert(4);
//     H1.insert(14);
//     H1.insert(11);
//     H1.insert(40);
//     H1.insert(90);
//     H1.insert(90);
//     H1.insert(20);
//     H1.print();
// }




// // NEO COLAB CODE
// #include<iostream>
// using namespace std;

// class Maxheap{
//     int *arr;
//     int Hsize;
//     int total_size;
//     public:
    
//     Maxheap(int n){
//         arr = new int[n];
//         Hsize = 0;
//         total_size = n;
        
//     }
    
//     void insert(int value){
//         if(total_size==Hsize){
//             return;
//         }
//         arr[Hsize]= value;
//         int index = Hsize;
//         Hsize++;
        
//         while(index>0 && arr[(index-1)/2]<arr[index]){
//             swap(arr[index],arr[(index-1)/2]);
//             index = (index-1)/2;
//         }
//     }
//     void print(int n){
//         for(int i = 0 ; i < n ; i++){
//             cout<<arr[i]<<" ";
//         }
//     }
// };

// int  main(){
//     int n;
//     cin>>n;
    
//     Maxheap h(n);
//     for(int i = 0; i<n; i++){
//         int elem;
//         cin>>elem;
//         h.insert(elem);
//     }
//     h.print(n);
// }


// // SAME SAME BUT DIFFLE
 
// #include<iostream>
// using namespace std;

// class MaxHeap{
//   int *arr;
//   int size;  // heap size;
//   int total_size;
  
//   public:
  
//   MaxHeap(int value){
//     arr = new int[value];
//     size = 0;
//     total_size = value;
//   }
  
//   void insert(int value){
//     arr[size] = value;
//     int index = size;
//     size++;
    
//     while(index>0 && arr[(index-1)/2]<arr[index]){
//         swap(arr[(index-1)/2],arr[index]);
//         index = (index-1)/2;
        
//     }
    
//   }
  
//   void print(int n){
//     for(int i = 0 ; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//   }
  
// };


// int main(){
//     int n;
//     cin>>n;
    
//     MaxHeap h(n);
//     for(int i = 0 ; i < n ; i++){
//         int elem;
//         cin>>elem;
//         h.insert(elem);
//     }
    
//     h.print(n);
// }



//// VERY VERY IMP CODE IN NEOCOLAB

#include <iostream>
#include <iomanip>

using namespace std;

// Function to swap two elements
void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

// Function to maintain the min-heap property
void minHeapify(int heap[], int size, int i) {
    int left = 2 * i + 1;  // Left child index
    int right = 2 * i + 2; // Right child index
    int smallest = i;

    // Compare with left child
    if (left < size && heap[left] < heap[smallest]) {
        smallest = left;
    }

    // Compare with right child
    if (right < size && heap[right] < heap[smallest]) {
        smallest = right;
    }

    // If smallest is not the current node, swap and heapify recursively
    if (smallest != i) {
        swap(heap[i], heap[smallest]);
        minHeapify(heap, size, smallest);
    }
}

// Function to build the min-heap from an array
void buildMinHeap(int heap[], int size) {
    for (int i = size / 2 - 1; i >= 0; i--) {
        minHeapify(heap, size, i);
    }
}

// Function to insert an element into the min-heap
void insertElement(int heap[], int &size, int value) {
    if (size >= 100) {
        cout << "Heap is full." << endl;
        return;
    }

    // Insert the value at the end of the heap
    heap[size] = value;
    int index = size;
    size++;

    // Bubble up to restore heap property  ( leaf to root)
    while (index > 0 && heap[(index - 1) / 2] /*min heap*/> heap[index]) {
        swap(heap[index], heap[(index - 1) / 2]);
        index = (index - 1) / 2;
    }
}

// Function to display the min-heap
void displayMinHeap(int heap[], int size) {
    for (int i = 0; i < size; i++) {
        cout << heap[i] << " ";
    }
    cout << endl;
}

// Function to calculate the average of heap elements
double averageOfElements(int heap[], int size) {
    if (size == 0) return 0.0;

    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += heap[i];
    }

    return sum / size;
}

int main() {
    int n;
    cin >> n;

    int *heap = new int[n]; // Dynamic memory allocation for heap
    int size = 0;

    // Insert elements into the heap
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        insertElement(heap, size, value);
    }

    // Build the min-heap
    buildMinHeap(heap, size);

    // Display the min-heap
    displayMinHeap(heap, size);

    // Calculate and display the average of heap elements
    double average = averageOfElements(heap, size);
    cout << "Average: " << fixed << setprecision(2) << average;

    delete[] heap; // Free dynamically allocated memory
    return 0;
}









/*Single File Programming Question
Problem Statement



Sarah is a financial analyst who is developing a budgeting application for individuals looking to save money. The app allows users to input their savings goals, but Sarah wants to ensure that only certain amounts (specifically, those that are multiples of five) are considered valid savings entries.



She needs a program that stores valid savings amounts in a min-heap structure, allowing her to efficiently retrieve the lowest savings goal. Your task is to help Sarah implement this functionality.

Input format :
The first line contains an integer n, representing the number of savings goals a user wishes to enter.

The second line consists of n space-separated integers representing a savings goal.

Output format :
If an entered amount is not a multiple of five, display a message indicating that the value is not valid.

After processing all inputs, display the min-heap of valid savings goals in a single line, with amounts separated by spaces.



Refer to the sample output for the formatting specifications.

Code constraints :
1 ≤ n ≤ 10

1 ≤ saving goal ≤ 1000

Sample test cases :
Input 1 :
5
15 10 20 5 30
Output 1 :
5 10 20 15 30 
Input 2 :
6
50 20 70 15 30 34
Output 2 :
34 is not a multiple of five
15 20 70 50 30 
Input 3 :
7
1 2 3 4 5 6 10
Output 3 :
1 is not a multiple of five
2 is not a multiple of five
3 is not a multiple of five
4 is not a multiple of five
6 is not a multiple of five
5 10 


code: of header footer;



#include <iostream>
#include <stdlib.h>
using namespace std; 

// You are using GCC
void swap(int *x, int *y) {
    //Type your code here
    int temp = *x;
    *x = *y;
    *y = temp;

}
void minHeapify(int heap[], int size, int i) {
    //Type your code here
    int smallest = i;
    int left = 2*i+1;
    int right = 2*i+2;
    
    if(size>left && heap[left]<heap[smallest]){
        smallest = left;
    }
    
    if(size>right && heap[right]<heap[smallest]){
        smallest = right;
    }
    
    if(smallest!=i){
        swap(heap[smallest],heap[i]);
        minHeapify(heap,size,i);
    }
}
void buildMinHeap(int heap[], int size) {
    //Type your code here
    for(int i = size/2-1; i>=0; i--){
        minHeapify(heap,size,i);
    }
    
}
void insertElement(int heap[], int *size, int value) {
    //Type your code here
    heap[*size]=value;
    int index = *size;
    (*size)++;
    
    while(index>0 && heap[(index-1)/2]>heap[index]){
        swap(heap[(index-1)/2],heap[index]);
        index = (index-1)/2;
    }
    
    
    
}
void displayMinHeap(int heap[], int size) {
    //Type your code here
    for(int i = 0 ; i<size; i++){
        cout<<heap[i]<<" ";
    }
    
}


int main() {
    int n;
    cin >> n;
    int *heap = (int *)malloc(n * sizeof(int));
    int size = 0;
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        if (value % 5 == 0) {
            insertElement(heap, &size, value);
        } else {
            cout << value << " is not a multiple of five" << endl;
        }
    }
    buildMinHeap(heap, size);
    displayMinHeap(heap, size);
    free(heap); 
    return 0;
}






*/







