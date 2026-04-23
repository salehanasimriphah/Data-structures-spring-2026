#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertBegin(Node*& head, int val) {
    Node* n = new Node();
    n->data = val;
    n->next = head;
    head = n;
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

    insertBegin(head, 10);
    insertBegin(head, 20);
    insertBegin(head, 30);

    display(head);

    return 0;
}