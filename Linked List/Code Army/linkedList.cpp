#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Insert at the start
    void insertAtStart(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Insert at the end
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) temp = temp->next;
            temp->next = newNode;
        }
    }

    // Insert at a specific position
    void insertAtPosition(int value, int position) {
        if (position == 1) {
            insertAtStart(value);
            return;
        }

        Node* newNode = new Node(value);
        Node* temp = head;
        for (int i = 1; i < position - 1 && temp; i++) {
            temp = temp->next;
        }

        if (temp) {
            newNode->next = temp->next;
            temp->next = newNode;
        } else {
            cout << "Position out of range." << endl;
        }
    }

    // Display the list
    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList list;

    // Insert at the start
    list.insertAtStart(10);
    list.insertAtStart(20);

    // Insert at the end
    list.insertAtEnd(30);
    list.insertAtEnd(40);

    // Insert at position 2
    list.insertAtPosition(25, 2);

    // Display the list
    list.display();

    return 0;
}