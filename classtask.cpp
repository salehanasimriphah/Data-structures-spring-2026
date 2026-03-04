#include <iostream>
using namespace std;
struct Node 
{
    int data;
    Node* next;
};
class data
{
private:
	
Node* head;

public:
	
 data() : head(NULL) {}
void insertAtBeginning(int value)    
{        
   Node* newNode = new Node();        
   newNode->data = value;        
   newNode->next = head;        
   head = newNode;    
}
void deleteAtPosition(int position) 
{
    if (head == NULL) 
    {
        cout << "List is empty..." << endl;
        return;
    }

    if (position == 1) 
    {
        Node* temp = head;
        head = head->next;
        cout << "Deleted: " << temp->data << endl;
        delete temp;
        return;
    }

    Node* current = head;
    Node* previous = NULL;

    for (int i = 1; current != NULL && i < position; i++) 
    {
        previous = current;
        current = current->next;
    }

    if (current == NULL) 
    {
        cout << "Position does not exist." << endl;
        return;
    }

    
    previous->next = current->next;
    cout << "Deleted: " << current->data << endl;
    delete current;
}

    void display()
	{
  	if (head == NULL) 
	{
        cout << "List is empty.\n";
        return;
    }

    Node* temp = head;
    cout << "Linked List: ";
    while (temp != NULL) 
	{
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
	}
};
int main()
{
	
	data list;
	list.insertAtBeginning(50); 
	list.insertAtBeginning(40); 
	list.insertAtBeginning(30); 
	list.insertAtBeginning(20); 
	list.insertAtBeginning(10); 
	list.display();
	list.deleteAtPosition(3);
	list.display();

	return 0;
}
