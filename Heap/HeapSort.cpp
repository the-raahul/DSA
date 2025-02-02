//  // method used step up;;;;

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
// void sortArray(int arr[], int n){
//     // heapsort algo mein max heap k baad top elem ko delete kerteh hai aur last elem ko root banate hai aur hepify krteh hao
//     for(int i=n-1;i>0;i--){
//         swap(arr[i],arr[0]);
//         Heapify(arr,0,i);
//     }
// }

// int  main(){
//     int arr[] = {10,3,8,9,5,13,18,14,11,70};
//     BuildMaxHeap(arr,10);
//     sortArray(arr,10);
//     printHeap(arr,10);

// }

// // NEO COLAB HEAPSORT

#include <iostream>
using namespace std;

// Function to heapify a subtree rooted with node i which is an index in arr[].
// n is the size of the heap
void heapify(int arr[], int size, int root)
{
    int largest = root;       // Initialize largest as root
    int left = 2 * root + 1;  // Left child
    int right = 2 * root + 2; // Right child

    // If left child is larger than root
    if (left < size && arr[left] > arr[largest])
    {
        largest = left;
    }

    // If right child is larger than largest so far
    if (right < size && arr[right] > arr[largest])
    {
        largest = right;
    }

    // If largest is not root, swap and continue heapifying
    if (largest != root)
    {
        swap(arr[root], arr[largest]);
        heapify(arr, size, largest); // Recursively heapify the affected subtree
    }
}

// Main function to perform heap sort
void heapSort(int arr[], int size)
{
    // Build a max heap.
    for (int i = size / 2 - 1; i >= 0; i--)
    {
        heapify(arr, size, i);
    }

    // One by one extract elements from heap
    for (int i = size - 1; i > 0; i--)
    {
        // Move current root to end
        swap(arr[0], arr[i]);

        // Call heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

int main()
{
    int size;
    cin >> size;
    int *candies = new int[size]; // Dynamically allocate memory for array
    for (int i = 0; i < size; i++)
    {
        cin >> candies[i];
    }

    heapSort(candies, size); // Sort the array

    // Print the sorted array
    for (int i = 0; i < size; i++)
    {
        cout << candies[i] << " ";
    }
    delete[] candies; // Free dynamically allocated memory
    return 0;
}




// #include<iostream>
// using namespace std;
// // build heapify function
// void heapify(int arr[],int root,int size){
//     int largest = root;
//     int left = 2*root+1;
//     int right = 2*root+2;

//     if(left<size&&arr[left]<arr[largest]){
//         largest = left;
//     }

//     if(right<size&&arr[right]<arr[largest]){
//         largest = right;
//     }

//     if(largest!=root){
//         swap(arr[largest],arr[root]);
//         heapify(arr,largest,size);
//     }


// }

// void heapsort(int arr[],int size){
//     // max heap implementation
//     for(int i = size/2-1; i>=0; i--){
//         heapify(arr,i,size);
//     }


//     //for heapsort
//     for(int i = size-1;i>0; i--){
//         swap(arr[0],arr[i]);
//         heapify(arr,0,i);
//     }
// }

// int main (){
//     int n;
//     cin>>n;
//     int *arr = new int [n];
//     for(int i = 0; i<n ; i++){
//         cin>>arr[i];
//     }

//     heapsort(arr,n);
//     for(int i = 0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }

// }




#include<iostream>
using namespace std;

void heapify(int arr[],int size, int root){
    int largest = root;
    int left = 2*root+1;
    int right = 2*root+2;

    if(size>left&&arr[left]>arr[largest]){
        largest = left;
    }

    if(size>right && arr[right]>arr[largest]){
        largest = right;
    }

    if(largest!=root){
        swap(arr[largest],arr[root]);
        heapify(arr,size,largest);
    }

}

void Heapsort(int arr[],int size){
    // max heap
    for(int i = size/2-1; i>=0; i--){
        heapify(arr,size,i);
    }

    // for sorting

    for(int i = size-1; i>0; i--){
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}

int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }


    Heapsort(arr,n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
