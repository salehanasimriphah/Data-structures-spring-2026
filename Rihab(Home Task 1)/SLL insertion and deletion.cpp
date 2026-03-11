//Rihab Sajid
//69585
#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
void InsertAtSpecificPosition(Node*& head, int value, int pos)
{
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;
    if(pos == 1)
    {
        newNode->next = head;
        head = newNode;
        return;
    }
    Node* temp = head;
    for(int i=1; i<pos-1; i++)
    {
        if(temp == NULL)
        {
            cout << "Invalid Position" << endl;
            return;
        }
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void DeleteAtSpecificPosition(Node*& head, int pos)
{
    if(head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    Node* temp = head;

    if(pos == 1)
    {
        head = head->next;
        delete temp;
        return;
    }
    for(int i = 1; i < pos - 1; i++)
    {
        if(temp->next == NULL)
        {
            cout << "Invalid position" << endl;
            return;
        }
        temp = temp->next;
    }
    Node* nodeToDelete = temp->next;
    if(nodeToDelete == NULL)
    {
        cout << "Invalid position" << endl;
        return;
    }
    temp->next = nodeToDelete->next;
    delete nodeToDelete;
}
void display(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    Node* head = NULL;
    InsertAtSpecificPosition(head, 10, 1);
    InsertAtSpecificPosition(head, 20, 2);
    InsertAtSpecificPosition(head, 30, 3);
    InsertAtSpecificPosition(head, 25, 3);
    cout << "Original list: ";
    display(head);
    DeleteAtSpecificPosition(head, 3); 
    cout << "After deleting position 3: ";
    display(head);
    DeleteAtSpecificPosition(head, 1); 
    cout << "After deleting position 1: ";
    display(head);
    DeleteAtSpecificPosition(head, 5); 
}
