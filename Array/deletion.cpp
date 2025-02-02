// // 1. Deletion at the Beginning

// #include <iostream>
// using namespace std;

// int main() {
//     int size;
//     cout << "Enter the size of the array: ";
//     cin >> size;

//     int arr[size];
//     cout << "Enter the elements of the array:\n";
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     // Shift elements to the left to delete the first element
//     for (int i = 0; i < size - 1; i++) {
//         arr[i] = arr[i + 1];
//     }

//     size--;  // Reduce the size after deletion

//     cout << "Array after deletion at the beginning: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }




// // 2. Deletion at the End

// #include <iostream>
// using namespace std;

// int main() {
//     int size;
//     cout << "Enter the size of the array: ";
//     cin >> size;

//     int arr[size];
//     cout << "Enter the elements of the array:\n";
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     size--;  // Simply reduce the size to remove the last element

//     cout << "Array after deletion at the end: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }




// 3. Deletion at a Specific Position

// #include <iostream>
// using namespace std;

// int main() {
//     int size, position;
//     cout << "Enter the size of the array: ";
//     cin >> size;

//     int arr[size];
//     cout << "Enter the elements of the array:\n";
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     cout << "Enter the position to delete (1 to " << size << "): ";
//     cin >> position;
    
//     if(position < 1 || position > size) {
//         cout << "Invalid position!";
//         return 1;
//     }

//     // Shift elements to the left to delete the element at the given position
//     for (int i = position - 1; i < size - 1; i++) {
//         arr[i] = arr[i + 1];
//     }

//     size--;  // Reduce the size after deletion

//     cout << "Array after deletion at position " << position << ": ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }


//deletion at specific position;
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int pos;
    cin>>pos;
    for(int i = pos-1; i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    for(int i = 0; i<n; i++){
        cout<<arr[i];
    }
}