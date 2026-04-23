#include <iostream>
using namespace std;

struct Node
{
    char data;
    Node* left;
    Node* right;
};

Node* createNode(char value)
{
    Node* n = new Node;
    n->data = value;
    n->left = NULL;
    n->right = NULL;
    return n;
}
Node* buildTree()
{
    char x;
    cout << "Enter data (# for NULL): ";
    cin >> x;

    if(x == '#')
        return NULL;

    Node* root = createNode(x);

    cout << "Enter left of " << x << endl;
    root->left = buildTree();

    cout << "Enter right of " << x << endl;
    root->right = buildTree();

    return root;
}

void inorder(Node* root)
{
    if(root != NULL)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}
void preorder(Node* root)
{
    if(root != NULL)
    {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(Node* root)
{
    if(root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

int main()
{
    Node* root;

    cout << "Create Tree\n";
    root = buildTree();

    cout << "\nInfix: ";
    inorder(root);

    cout << "\nPrefix: ";
    preorder(root);

    cout << "\nPostfix: ";
    postorder(root);

    return 0;
}