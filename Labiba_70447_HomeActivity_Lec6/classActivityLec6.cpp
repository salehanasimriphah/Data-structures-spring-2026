#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next, *prev;
};

void insertEnd(Node*& head, int val) {
    Node* n = new Node{val, NULL, NULL};

    if (head == NULL) {
        head = n;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = n;
    n->prev = temp;
}

void insert4th(Node*& head, int val) {
    Node* n = new Node{val, NULL, NULL};
    Node* temp = head;

    for (int i = 1; i < 3; i++) {
        temp = temp->next;
    }

    n->next = temp->next;
    n->prev = temp;

    if (temp->next != NULL)
        temp->next->prev = n;

    temp->next = n;
}

void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " <-> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = NULL;

    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);
    insertEnd(head, 40);
    insertEnd(head, 50);

    insert4th(head, 99);

    display(head);

    return 0;
}