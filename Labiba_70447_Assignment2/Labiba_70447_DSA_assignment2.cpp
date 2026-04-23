#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Insert at begin
void insertAtBeginning(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// Insert at spec pos
void insertAtPosition(Node*& head, int value, int pos) {
    Node* newNode = new Node();
    newNode->data = value;

    if (pos == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Invalid position\n";
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// Delete at spec pos 
void deleteAtPosition(Node*& head, int pos) {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;

    if (pos == 1) {
        head = temp->next;
        delete temp;
        return;
    }

    Node* prev = NULL;

    for (int i = 1; i < pos && temp != NULL; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Invalid position\n";
        return;
    }

    prev->next = temp->next;
    delete temp;
}

// Display list
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = NULL;

    insertAtBeginning(head, 30);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 10);

    cout << "List after insertion at beginning: ";
    display(head);

    insertAtPosition(head, 25, 3);
    cout << "After insertion at position 3: ";
    display(head);

    deleteAtPosition(head, 2);
    cout << "After deletion at position 2: ";
    display(head);

    return 0;
}