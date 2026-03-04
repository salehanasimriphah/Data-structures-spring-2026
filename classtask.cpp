#include<iostream>
#include<conio.h>
using namespace std;
struct Node{
 	int data;
 	Node *next;
 };
void insertatbegin(Node *&head,int value){
	Node *newNode= new Node();
	newNode->data=value;
	newNode->next=head;
	head=newNode;
}
void deleteatspecific(Node*&head,int pos){
	if(head==NULL){
		cout<<"List is empty !!" << endl;
		return;
	}
	if(pos==1){
		Node*temp=head;
		head=head->next;
		cout<<" Deleted : " <<temp->data << endl;
		delete temp;
		return;
	}
	Node *temp=head;
	for(int i =1 ;temp!=NULL&&i<pos-1;i++){
		temp=temp->next;
	}
	if(temp==NULL || temp->next==NULL){
		cout<<" Invalid position " << endl;
		return;
	}
	Node * del=temp->next;
	temp->next=del->next;
	cout<<" Deleted : " <<del->data << endl;
	delete del;
}
void display(Node*&head){
	for(Node*temp=head;temp!=NULL;temp=temp->next){
		cout<<" Data : " << temp->data << " Address : " << temp->next << endl;
			
	}
}
int main (){
	Node * head=NULL;
	int pos;
	int value;
	int choice;
	do{
	cout<<"Menu : " << endl;
	cout<<"1. Insert at beginning "<< endl;
	cout<<"2. Delete at specific position "<< endl;
	cout<<"3. Display " << endl;
	cout<<"4. Exit"<< endl;
	cout<<"Choose any one "<< endl;
	cin>>choice;
	switch(choice){
		case 1 :
			cout<< "Enter value to insert : " << endl;
			cin>>value;
			insertatbegin(head,value);
			break;
	    case 2 :
			cout<< "Enter position to delete: " << endl;
			cin>>pos;
		    deleteatspecific(head,pos);
			break;
		case 3 :
			display(head);
			break;
		case 4 :
			cout<<"Exiting the menu " << endl;
		    break;
		default:
			cout<<"Invalid choice " << endl;
}

	} while(choice!=4);
	getch();
	return 0;	
	
}