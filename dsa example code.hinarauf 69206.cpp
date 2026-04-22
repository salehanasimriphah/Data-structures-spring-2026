#include <iostream>
using namespace std;


struct Node {
    char value;   
    Node* left;
    Node* right;

    Node(char val) {
        value = val;
        left = right = NULL;
    }
};

void inorder(Node* root) {
    if (root == NULL) return;

    if (root->left || root->right) cout << "(";
    inorder(root->left);
    cout << root->value;
    inorder(root->right);
    if (root->left || root->right) cout << ")";
}

void preorder(Node* root) {
    if (root == NULL) return;
    cout << root->value << " ";
    preorder(root->left);
    preorder(root->right);
}
 
void postorder(Node* root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->value << " ";
}

int main() {

    Node* root = new Node('*');
    root->left = new Node('+');
    root->right = new Node('-');

    root->left->left = new Node('a');
    root->left->right = new Node('b');

    root->right->left = new Node('c');
    root->right->right = new Node('d');

    cout << "Infix Expression: ";
    inorder(root);
    cout << endl;

    cout << "Prefix Expression: ";
    preorder(root);
    cout << endl;

    cout << "Postfix Expression: ";
    postorder(root);
    cout << endl;

    return 0;
    
}
