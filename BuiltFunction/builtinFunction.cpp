// // 1. swap Function
// // The swap function exchanges the values of two variables.

// #include <iostream>
// #include <algorithm> // for swap
// using namespace std;

// int main() {
//     int a = 5;
//     int b = 10;
//     swap(a, b);
//     cout << "After swap: " << a << " " << b << endl;
//     return 0;
// }

// // 2. max and min Functions
// // These functions return the maximum and minimum of two values, respectively.

// #include <iostream>
// #include <algorithm> // for max, min
// using namespace std;

// int main() {
//     int a = 5;
//     int b = 10;
//     cout << "Max: " << max(a, b) << endl;
//     cout << "Min: " << min(a, b) << endl;
//     return 0;
// }

// #include <iostream>  // special case
// using namespace std;
// int main() {
//     int a,b,c;
//     a=10,b=1,c=19;
//     cout<<max(max(a,b),c);

//     return 0;
// }


// // 3. abs Function
// // The abs function returns the absolute value of a number.


// #include <iostream>
// #include <cstdlib> // for abs
// using namespace std;

// int main() {
//     int a = -5;
//     cout << "Absolute value: " << abs(a) << endl;
//     return 0;
// }


// // 4. pow Function
// // The pow function returns the value of a number raised to the power of another number.


// #include <iostream>
// #include <cmath> // for pow
// using namespace std;

// int main() {
//     int a = 2;
//     int b = 3;
//     cout << "2 raised to the power 3: " << pow(a, b) << endl;
//     return 0;
// }

// // 5. sort Function
// // The sort function is used to sort elements in a range.

// #include <iostream>
// #include <algorithm> // for sort
// using namespace std;

// int main() {
//     int arr[] = {5, 3, 8, 1, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     sort(arr, arr + n);

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;

//     return 0;
// }

// // 6. reverse Function
// // The reverse function reverses the order of elements in a range.


#include <iostream>
#include <algorithm> // for reverse
using namespace std;

int main() {
    int arr[] = {5, 3, 8, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    reverse(arr, arr + n);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}




// #include<iostream>
// using namespace std;
// int main(){
//     for(int i = 0; i>=0;i ++){
//         cout<<i<<endl;
//     }
//     return 0;
// }


