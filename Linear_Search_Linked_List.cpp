#include <iostream>
using namespace std;

// Node structure for singly linked list
struct Node {
    int data;
    Node* next;
};

// Function to insert a new node at the end
void insertEnd(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to perform linear search on the linked list
int linearSearch(Node* head, int key) {
    int index = 0;
    Node* current = head;

    while (current != nullptr) {
        if (current->data == key) {
            return index;  // Found at this position
        }
        current = current->next;
        index++;
    }
    return -1; // Not found
}

// Function to display the list
void display(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}


int main() {
    Node* head = nullptr;
    int n, value, key;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        insertEnd(head, value);
    }

    cout << "Linked List: ";
    display(head);

    cout << "Enter element to search: ";
    cin >> key;

    int result = linearSearch(head, key);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found in the list.\n";

    return 0;
}
