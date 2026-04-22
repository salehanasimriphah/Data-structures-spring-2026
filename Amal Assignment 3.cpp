#include <iostream>
using namespace std;

struct Node {
    char data;
    Node* left;
    Node* right;

    Node(char v) {
        data = v;
        left = right = NULL;
    }
};

bool tree(Node* n) {
    return (n->left != NULL || n->right != NULL);
}

void inorder(Node* root) {
    if (root == NULL) return;

    if (tree(root)) cout << "(";

    inorder(root->left);
    cout << root->data;
    inorder(root->right);

    if (tree(root)) cout << ")";
}

void preorder(Node* root) {
    if (root == NULL) return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root) {
    if (root == NULL) return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {

    Node* root = new Node('*');
    
    root->left = new Node('-');
    root->right = new Node('+');

    root->left->left = new Node('9');
    root->left->right = new Node('8');
    root->right->left = new Node('5');
    root->right->right = new Node('3');

    cout << "Infix: ";
    inorder(root);
    cout << endl;

    cout << "Prefix: ";
    preorder(root);
    cout << endl;

    cout << "Postfix: ";
    postorder(root);
    cout << endl;

    return 0;
}