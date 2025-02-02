#include<iostream>
using namespace std;

class Stack {
    int *arr;
    int top;
    int size;

public:
    // Constructor to initialize stack with given size
    Stack(int s) {
        top = -1;
        size = s;
        arr = new int[size]; // Allocate memory for stack array
    }

    // Push element onto the stack
    void push(int value) {
        if (top == size - 1) {
            cout << "Stack is overflow\n";
            return;
        } else {
            top++;
            arr[top] = value;
            cout << "Pushed " << value << " into the stack\n";
        }
    }

    // Pop element from the stack
    void pop() {
        if (top == -1) {
            cout << "Stack is underflow\n";
        } else {
            cout << "Popped " << arr[top] << " from the stack\n";
            top--;
        }
    }

    // Peek at the top element of the stack
    int peek() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return -1; // Return -1 if the stack is empty
        } else {
            return arr[top]; // Return the top element
        }
    }

    // Check if the stack is empty
    bool isempty() {
        return top == -1;
    }

    // Get the current size of the stack
    int issize() {
        return top + 1;
    }

    // Destructor to free the allocated memory
    ~Stack() {
        delete[] arr;
    }
};

int main() {
    Stack s(5); // Create a stack of size 5
    s.push(5);
    s.push(10);
    s.pop();
    s.push(9);
    cout << "Top element: " << s.peek() << endl;

    return 0;
}