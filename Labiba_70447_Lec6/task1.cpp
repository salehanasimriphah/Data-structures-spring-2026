#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

void insertStart(Node*& head, int val) {
    Node* n = new Node();
    n->data = val;
    n->prev = NULL;
    n->next = head;

    if (head != NULL) {
        head->prev = n;
    }

    head = n;
}

void display(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

int main() {
    Node* head = NULL;

    insertStart(head, 10);
    insertStart(head, 20);
    insertStart(head, 30);

    display(head);

    return 0;
}