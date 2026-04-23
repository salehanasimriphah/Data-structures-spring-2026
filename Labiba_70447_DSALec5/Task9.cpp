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

bool search(Node* head, int key) {
    Node* temp = head;

    while (temp != NULL) {
        if (temp->data == key) {
            return true;
        }
        temp = temp->next;
    }

    return false;
}

int main() {
    Node* head = NULL;

    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);

    int key = 20;

    if (search(head, key)) {
        cout << "Found\n";
    } else {
        cout << "Not Found\n";
    }

    return 0;
}