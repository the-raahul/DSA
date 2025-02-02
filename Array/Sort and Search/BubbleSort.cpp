// #include <iostream>
// using namespace std;

// void bubbleSort(int arr[], int size) {
//     for (int i = 0; i < size - 1; i++) {
//         for (int j = 0; j < size - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 // Swap arr[j] and arr[j + 1]
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
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

//     bubbleSort(arr, size);

//     cout << "Array after Bubble Sort: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }






//-------------------------------------------------------------------------------------------------------------------------------------

#include<iostream>
#include<algorithm>
using namespace std;
void arr_input(int *arr,int n){
    
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
}


void arr_display(int *arr,int n){
    cout<<"Sorting "<<endl;;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int* arr,int n){
    int is_sorted = 1;
    for(int i = 0; i<n-1; i++){  // No. of passess
    // is_sorted = 1;
        for(int j = 0; j<n-1-i; j++){ // no. of comparison
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                is_sorted = 0;
            }
        }
    }
        if(is_sorted){
            cout<<"Array is sorted"<<endl;
            return;
        }
        cout<<"Array is not sorted"<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    arr_input(arr,n);
    arr_display(arr,n);
    bubbleSort(arr,n);
    arr_display(arr,n);
}