#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertStart(Node*& head, int val) {
    Node* n = new Node{val, NULL};

    if (head == NULL) {
        head = n;
        n->next = head;
        return;
    }

    Node* temp = head;
    while (temp->next != head)
        temp = temp->next;

    n->next = head;
    temp->next = n;
    head = n;
}

void display(Node* head) {
    if (head == NULL) return;

    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);

    cout << "(head)\n";
}

int main() {
    Node* head = NULL;

    insertStart(head, 10);
    insertStart(head, 20);
    insertStart(head, 30);

    display(head);

    return 0;
}