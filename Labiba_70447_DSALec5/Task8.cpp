#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertEnd(Node*& head, int val) {
    Node* n = new Node();
    n->data = val;
    n->next = NULL;

    if (head == NULL) {
        head = n;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = n;
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

    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);

    display(head);

    return 0;
}