#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// insert at end 
void insertEnd(Node*& head, int val) {
    Node* n = new Node{val, NULL};

    if (head == NULL) {
        head = n;
        n->next = head;
        return;
    }

    Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }

    temp->next = n;
    n->next = head;
}

// insert at position
void insertPos(Node*& head, int val, int pos) {
    Node* n = new Node{val, NULL};

    // insert at first position
    if (pos == 1) {
        if (head == NULL) {
            head = n;
            n->next = head;
        } else {
            Node* temp = head;
            while (temp->next != head)
                temp = temp->next;

            n->next = head;
            temp->next = n;
            head = n;
        }
        return;
    }

    Node* temp = head;

    for (int i = 1; i < pos - 1; i++) {
        temp = temp->next;
        if (temp == head) {
            cout << "Invalid position\n";
            return;
        }
    }

    n->next = temp->next;
    temp->next = n;
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

    insertPos(head, 99, 2);

    display(head);

    return 0;
}