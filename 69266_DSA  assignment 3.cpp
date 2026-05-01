#include<iostream>
using namespace std;

struct Node{
	char data;
	Node* left;
	Node* right;
};

Node* createNode(char value){
	Node* newnode = new Node();     
	newnode->data = value;
	newnode->left = NULL;
	newnode->right = NULL;
	return newnode;
}

void infixTraversal(Node* root){
    if(root != NULL){
        if(root->left != NULL){
            cout << "(";
        }
             
        infixTraversal(root->left);
        cout << root->data;
        infixTraversal(root->right);
            
        if(root->right != NULL){
            cout << ")";
        }
    }
}

void prefixTraversal(Node* root){
    if(root != NULL){
        cout << root->data << " ";
        prefixTraversal(root->left);
        prefixTraversal(root->right);
    }
}

void postfixTraversal(Node* root){
    if(root != NULL){
        postfixTraversal(root->left);
        postfixTraversal(root->right);
        cout << root->data << " ";
    }
}

int main(){
	Node* root = createNode('*');
	root->left = createNode('+');
	root->right = createNode('-');
	root->left->left = createNode('A');
	root->left->right = createNode('B');
	root->right->left = createNode('C');
	root->right->right = createNode('D');
	
	cout << "Infix Expression: ";
	infixTraversal(root);
	
	cout << endl;
	cout << "Prefix Expression: ";
	prefixTraversal(root);
	
	cout << endl;
	cout << "Postfix Expression: ";
	postfixTraversal(root);
	
	return 0;
}