#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void deletePos(Node*& head, int pos) {
    if (head == NULL) return;

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

void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = NULL;

   
    head = new Node{10, new Node{20, new Node{30, NULL}}};

    deletePos(head, 2);

    display(head);

    return 0;
}