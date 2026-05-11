#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// insert (helper)
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

// delete specific node
void deleteNode(Node*& head, int key) {
    if (head == NULL) return;

    Node *curr = head, *prev = NULL;

    // if only one node
    if (head->next == head && head->data == key) {
        delete head;
        head = NULL;
        return;
    }

    // if head node to delete
    if (head->data == key) {
        Node* temp = head;
        while (temp->next != head)
            temp = temp->next;

        temp->next = head->next;
        Node* del = head;
        head = head->next;
        delete del;
        return;
    }

    // search node
    do {
        prev = curr;
        curr = curr->next;

        if (curr->data == key) {
            prev->next = curr->next;
            delete curr;
            return;
        }

    } while (curr != head);
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
    insertEnd(head, 40);

    deleteNode(head, 30);

    display(head);

    return 0;
}