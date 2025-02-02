// // 1. Insertion at the Beginning

// #include <iostream>
// using namespace std;

// int main() {
//     int size, element;
//     cout << "Enter the size of the array: ";
//     cin >> size;

//     int arr[size + 1];  // Array size + 1 for insertion
//     cout << "Enter the elements of the array:\n";
//     for (int i = 1; i <= size; i++) {
//         cin >> arr[i];
//     }

//     cout << "Enter the element to insert at the beginning: ";
//     cin >> element;

//     // Shift elements to the right
//     for (int i = size; i >= 1; i--) {
//         arr[i + 1] = arr[i];
//     }

//     arr[1] = element;  // Insert at the beginning
//     size++;

//     cout << "Array after insertion: ";
//     for (int i = 1; i <= size; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }


// #include<iostream> /// MY Insertion Code Before CBT
// using namespace std;
// int main(){
//     int num;
//     cin>>num;
//     int arr[num];
//     for(int i = 0; i<num; i++){
//         cin>>arr[i];
//     }
//     int element;
//     cin>>element;
//     for(int i = num; i>0; i--){
//         arr[i]=arr[i-1]; 
//     }
//     num++;
//     arr[0]=element;
//     for(int i = 0; i<num; i++){
//         cout<<arr[i]<<" ";
//     }

// }


// // 2. Insertion at the End

// #include <iostream>
// using namespace std;

// int main() {
//     int size, element;
//     cout << "Enter the size of the array: ";
//     cin >> size;

//     int arr[size + 1];  // Array size + 1 for insertion
//     cout << "Enter the elements of the array:\n";
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     cout << "Enter the element to insert at the end: ";
//     cin >> element;

//     arr[size] = element;  // Insert at the end
//     size++;

//     cout << "Array after insertion: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }



// 3. Insertion at a Specific Position

// #include <iostream>
// using namespace std;

// int main() {
//     int size, element, position;
//     cout << "Enter the size of the array: ";
//     cin >> size;

//     int arr[size + 1];  // Array size + 1 for insertion
//     cout << "Enter the elements of the array:\n";
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     cout << "Enter the position to insert (1 to " << size + 1 << "): ";
//     cin >> position;
    
//     if(position < 1 || position > size + 1) {
//         cout << "Invalid position!";
//         return 1;
//     }

//     cout << "Enter the element to insert: ";
//     cin >> element;

//     // Shift elements to the right
//     for (int i = size; i >= position - 1; i--) {
//         arr[i + 1] = arr[i];
//     }

//     arr[position - 1] = element;  // Insert at the specific position
//     size++;

//     cout << "Array after insertion: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }




#include<iostream> //my code before cbt
using namespace std;
int main(){
    int num;
    cin>>num;
    int arr[num];
    for(int i = 0 ; i<nu m; i++){ 
        cin>>arr[i];
    }
    int pos,element;
    cin>>pos>>element;
    if(pos<1 || pos>num){
        cout<<"Invalid";
        return 1;
    }
    for(int i = num; i>=pos-1;i--){
        arr[i]=arr[i-1];
    }
    num++;
    arr[pos-1]=element;
    for(int i = 0 ; i<num; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}