#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertEnd(Node*& head, int val) {
    Node* n = new Node{val, NULL};

    if (head == NULL) {
        head = n;
        n->next = head;
        return;
    }

    Node* temp = head;
    while (temp->next != head)
        temp = temp->next;

    temp->next = n;
    n->next = head;
}

void deleteStart(Node*& head) {
    if (head == NULL) return;

    if (head->next == head) {
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;

    while (temp->next != head)
        temp = temp->next;

    Node* del = head;
    temp->next = head->next;
    head = head->next;
    delete del;
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

    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);

    deleteStart(head);

    display(head);

    return 0;
}