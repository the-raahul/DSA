// #include <iostream>
// using namespace std;

// void insertionSort(int arr[], int size) {
//     for (int i = 1; i < size; i++) {
//         int key = arr[i];
//         int j = i - 1;

//         // Move elements of arr[0...i-1], that are greater than key, to one position ahead
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j = j - 1;
//         }
//         arr[j + 1] = key;
//     }
// }

// int main() {
//     int size;
//     cout << "Enter the size of the array: ";
//     cin >> size;

//     int arr[size];
//     cout << "Enter the elements of the array:\n";
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     insertionSort(arr, size);

//     cout << "Array after Insertion Sort: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }



// My practice Code
#include<iostream>
using namespace std;

void in_arr(int *arr, int n){
    for(int i = 0; i<n ; i++){
        cin>>arr[i];
    }
}

void disp_arr(int *arr, int n){
    for(int i = 0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertionSort(int *arr,int n){
    for(int i = 0; i<n; i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    in_arr(arr,n);
    disp_arr(arr,n);
    insertionSort(arr,n);
    disp_arr(arr,n);
}
