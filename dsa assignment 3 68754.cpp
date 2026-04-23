#include <iostream>
using namespace std;
struct TreeNode {
    string data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(string val)
    {
    	data = val;
    	right=left = NULL;
	}
};
void inOrderTraversal(TreeNode* root) {
    if (root == NULL){
    	return;
	}
	
	if (root->data == "+" || root->data == "-" ||
        root->data == "*" || root->data == "/" ||
        root->data == "^"){
		cout << "(";
	} 
	
        inOrderTraversal(root->left);
        cout << root->data << " ";
        inOrderTraversal(root->right);
        
    if (root->data == "+" || root->data == "-" ||
        root->data == "*" || root->data == "/" ||
        root->data == "^"){
		cout << ")";
	}
}

void preOrderTraversal(TreeNode* root) {
    if (root == NULL){
    	return;
	}
        cout << root->data << " ";
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
}

void postOrderTraversal(TreeNode* root) {
    if (root == NULL){
    	return;
	}
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        cout << root->data << " ";
}

int main() {
    TreeNode* root = new TreeNode("*");
    root->left = new TreeNode("+");
    root->right = new TreeNode("c");

    root->left->left = new TreeNode("a");
    root->left->right = new TreeNode("b");

    cout << "Infix expression: ";
    inOrderTraversal(root);
    cout << endl;

    cout << "Prefix expression: ";
    preOrderTraversal(root);
    cout << endl;

    cout << "Postfix expression: ";
    postOrderTraversal(root);
    cout << endl;
    
    cout << endl;
    return 0;
}

