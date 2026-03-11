#include <iostream>
using namespace std;
class Node {
public:
    int data;
    int address;
    Node* prev;
    Node* next;
    Node(int d, int addr) {
        data = d;
        address = addr;
        prev = NULL;
        next = NULL;
    }
};
class DoublyLinkedList {
public:
    Node* head;
    DoublyLinkedList() {
        head = NULL;
    }
    void append(int data, int addr) {
        Node* newNode = new Node(data, addr);
        if (head == NULL) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
    void insertAfterFourth() {
        Node* temp = head;
        for (int i = 1; i < 4; i++) {
            if (temp == NULL) return;
            temp = temp->next;
        }
        Node* newNode = new Node(6, 600);
        newNode->next = temp->next;
        newNode->prev = temp;
        if (temp->next != NULL)
            temp->next->prev = newNode;
        temp->next = newNode;
    }
    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << "Value: " << temp->data 
                 << "  Address: " << temp->address << endl;
            temp = temp->next;
        }
    }
};
int main() {
    DoublyLinkedList list;
    list.append(1, 100);
    list.append(2, 200);
    list.append(3, 300);
    list.append(4, 400);
    list.append(5, 500);
    list.append(7, 700);
    list.insertAfterFourth();
    cout << "Doubly Linked List:" << endl;
    list.display();
    return 0;
}