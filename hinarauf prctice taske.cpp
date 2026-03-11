#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;
};
void insertBeginning(Node*& head, int value)
{
    Node* newNode = new Node();
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = head;

    if(head != NULL)
        head->prev = newNode;

    head = newNode;
}
void insertEnd(Node*& head, int value)
{
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL)
    {
        newNode->prev = NULL;
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}
void insertPosition(Node*& head, int value, int pos)
{
    if(pos == 1)
    {
        insertBeginning(head,value);
        return;
    }

    Node* newNode = new Node();
    newNode->data = value;

    Node* temp = head;

    for(int i=1;i<pos-1 && temp!=NULL;i++)
        temp = temp->next;

    if(temp == NULL)
    {
        cout<<"Invalid Position\n";
        return;
    }

    newNode->next = temp->next;
    newNode->prev = temp;

    if(temp->next != NULL)
        temp->next->prev = newNode;

    temp->next = newNode;
}
void deleteBeginning(Node*& head)
{
    if(head == NULL)
    {
        cout<<"List Empty\n";
        return;
    }

    Node* temp = head;
    head = head->next;

    if(head != NULL)
        head->prev = NULL;

    delete temp;
}
void deleteEnd(Node*& head)
{
    if(head == NULL)
    {
        cout<<"List Empty\n";
        return;
    }

    Node* temp = head;

    while(temp->next != NULL)
        temp = temp->next;

    if(temp->prev != NULL)
        temp->prev->next = NULL;
    else
        head = NULL;

    delete temp;
}
void deletePosition(Node*& head,int pos)
{
    if(pos == 1)
    {
        deleteBeginning(head);
        return;
    }

    Node* temp = head;

    for(int i=1;i<pos && temp!=NULL;i++)
        temp = temp->next;

    if(temp == NULL)
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(temp->prev != NULL)
        temp->prev->next = temp->next;

    if(temp->next != NULL)
        temp->next->prev = temp->prev;

    delete temp;
}
void display(Node* head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout<<temp->data<<" <-> ";
        temp = temp->next;
    }

    cout<<"NULL\n";
}

int main()
{
    Node* head = NULL;

    insertBeginning(head,10);
    insertBeginning(head,5);
    insertEnd(head,20);
    insertEnd(head,30);

    cout<<"List after insertions:\n";
    display(head);

    insertPosition(head,15,3);
    cout<<"After inserting 15 at position 3:\n";
    display(head);

    deleteBeginning(head);
    cout<<"After deleting from beginning:\n";
    display(head);

    deleteEnd(head);
    cout<<"After deleting from end:\n";
    display(head);

    deletePosition(head,2);
    cout<<"After deleting position 2:\n";
    display(head);

    return 0;
}
