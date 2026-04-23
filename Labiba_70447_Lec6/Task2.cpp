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

void deleteEnd(Node*& head) {
    if (head == NULL) return;

    Node* temp = head;

   
    if (temp->next == NULL) {
        delete temp;
        head = NULL;
        return;
    }

    
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->prev->next = NULL;
    delete temp;
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

    deleteEnd(head);

    display(head);

    return 0;
}