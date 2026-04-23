#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertPos(Node*& head, int val, int pos) {
    Node* n = new Node();
    n->data = val;

    if (pos == 1) {
        n->next = head;
        head = n;
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

    n->next = temp->next;
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

    insertPos(head, 10, 1);
    insertPos(head, 20, 2);
    insertPos(head, 30, 2);

    display(head);

    return 0;
}