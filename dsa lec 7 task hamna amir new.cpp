#include<iostream>
using namespace std;

struct Node{
	int  data;
	Node*next;
	Node*prev;
};

void insertatBeginning(Node*&head ,Node*&tail ,int value){
	Node*newnode=new Node();
	newnode->data=value;
	newnode->prev=NULL;
	newnode->next=head;
	
	if(head==NULL){
		
		head=newnode;
		tail=newnode;
	}
	else{
		head->prev=newnode;
		head=newnode;
	}
}

void insertatEnd(Node*&head ,Node*&tail ,int value){
	Node*newnode=new Node();
	newnode->data=value;
	newnode->prev=tail;
	newnode->next=NULL;
	
	if(head==NULL){
        
        head=newnode;
		tail=newnode;
	}
	else{
		tail->next=newnode;
		tail=newnode;
	}
}



void insertatPosition(Node*&head ,Node*&tail , int value ,int pos){
	if(pos==1){
		insertatBeginning(head ,tail ,value);
		return;
	}
	
	Node*newnode=new Node();
	newnode->data=value;
	
	Node*temp=head;
	for(int i=1;i<pos-1&&temp->next!=NULL;i++){
		temp=temp->next;
	}
	newnode->prev=temp;
	newnode->next=temp->next;
	
	if(temp->next!=NULL){
		temp->next->prev=newnode;
		
	}
	temp->next=newnode;
}

void deleteatStart(Node*&head){
	if(head==NULL){
		cout<<"List is empty"<<endl;
	}
	
	else{
		Node*temp=head;
		head=head->next;
		head->prev=NULL;
		delete temp;
		return;
	}
}

void deleteatEnd( Node*&tail){
	if(tail==NULL){
		cout<<"List is empty"<<endl;
	}
	else{
		Node*temp=tail;
		tail=tail->prev;
		tail->next=NULL;
		delete temp;
		return;
	}
}

void deleteatPosition(Node*&head ,int pos){
	if(pos==1){
		deleteatStart(head);
	}
	Node*temp=head;
	for(int i=1;i<pos&&temp->next!=NULL;i++){
		temp=temp->next;
	}
	if(temp->prev!=NULL){
		temp->prev->next=temp->next;
	}
	if(temp->next!=NULL){
		temp->next->prev=temp->prev;
	}
	delete temp;
	
}

void display(Node*&head){
	Node*temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

int main(){
	Node*head=NULL;
	Node*tail=NULL;
	
	insertatBeginning(head ,tail ,34);
	insertatBeginning(head ,tail ,45);
	insertatBeginning(head ,tail ,47);
	insertatBeginning(head ,tail ,50);
	
	insertatEnd( head,tail ,78);
	
	insertatPosition(head ,tail ,89 ,4);
	
	deleteatStart(head);
	deleteatEnd(tail);
	deleteatPosition(head ,5);
	
	
	display(head);
}
