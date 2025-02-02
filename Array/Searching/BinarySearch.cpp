// 2. Binary Search
// Binary search works only on sorted arrays by repeatedly dividing the search interval in half.

#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if the target is at mid
        if (arr[mid] == target) {
            return mid;  // Return the index if found
        }
 
        // If target is greater, ignore the left half
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;  // If target is smaller, ignore the right half
        }
    }
    return -1;  // Return -1 if not found
}

int main() {
    int size, target;
    cout << "Enter the size of the sorted array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the sorted array in ascending order:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search for: ";
    cin >> target;

    int result = binarySearch(arr, 0, size - 1, target);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
