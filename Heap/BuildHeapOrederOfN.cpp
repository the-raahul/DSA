// // method used step up;;;;
/// SPACE COMPLEXITY LOG N
// ////// MAX HEAP
// #include<iostream>
// using namespace std;

// void Heapify(int arr[], int index, int n){
//         int largest = index;
//         int left = 2*index+1;
//         int right = 2*index+2;
//         // largest will store the index of the element which is greater 
//         //betwwen parent , left child and right child;

//         if(left<n&&arr[left]>arr[largest])
//         largest = left;
//         if(right<n&&arr[right]>arr[largest])
//         largest = right;

//         if(largest !=index){
//             swap(arr[index],arr[largest]);
//             Heapify(arr,largest,n);
//         }



//     }

// void BuildMaxHeap(int arr[], int n){
//     // step down
//     for(int i = n/2-1;i>=0;i--){
//         Heapify(arr,i,n);
//     }
// }

// void printHeap(int arr[],int n){
//     for(int i = 0; i<n; i++){
//         cout<<arr[i]<<" ";
//         // cout<<endl;
//     }
// }
// int  main(){
//     int arr[] = {10,3,8,9,5,13,18,14,11,70};
//     BuildMaxHeap(arr,10);
//     printHeap(arr,10);

// }
////// MAX HEAP


//////// MIN HEAP
#include<iostream>
using namespace std;

void Heapify(int arr[], int index, int n){
        int largest = index;
        int left = 2*index+1;
        int right = 2*index+2;
        // largest will store the index of the element which is greater 
        //betwwen parent , left child and right child;

        if(left<n&&arr[left]<arr[largest])
        largest = left;
        if(right<n&&arr[right]<arr[largest])
        largest = right;

        if(largest !=index){
            swap(arr[index],arr[largest]);
            Heapify(arr,largest,n);
        }



    }

void BuildMaxHeap(int arr[], int n){
    // step down
    for(int i = n/2-1;i>=0;i--){
        Heapify(arr,i,n);
    }
}

void printHeap(int arr[],int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
        // cout<<endl;
    }
}
int  main(){
    int arr[] = {10,3,8,9,5,13,18,14,11,70};
    BuildMaxHeap(arr,10);
    printHeap(arr,10);

}