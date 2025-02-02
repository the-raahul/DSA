#include <iostream>
using namespace std;

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;

        // Find the minimum element in the unsorted array
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    selectionSort(arr, size);

    cout << "Array after Selection Sort: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
//------------------------------------------------------------------------------------------------------------------------------------------

// M Y   C O D E

#include<iostream>
using namespace std;

void arr_in(int* arr, int n){
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
}
void arr_out(int* arr, int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
    void insertionSort(int* arr,int n){
        for(int i = 0; i<n-1; i++){
            int indexMin = i;
            for(int j = i+1; j<n; j++){
                if(arr[j]<arr[indexMin]){
                    indexMin = j;
                }
            }
            // swap(arr[i],arr[indexMin]);
            int temp = arr[i];
            arr[i] = arr[indexMin];
            arr[indexMin] = temp;
        }
    }


int main(){
    int n;
    cin>>n;
    int arr[n];
    arr_in(arr,n);
    insertionSort(arr,n);
    arr_out(arr,n);
}