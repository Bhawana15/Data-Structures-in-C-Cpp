// DFS or Depth First Search USING RECURSION - DFS (Depth-first search) is technique used for traversing tree or graph. Here backtracking is used for traversal. 
// In this traversal first the deepest node is visited and then backtracks to it’s parent node if no sibling of that node exist.
// Therefore, the Depth First Traversals of a Tree can be in three ways:
// (a) Inorder   (Left, Root, Right)
// (b) Preorder  (Root, Left, Right)
// (c) Postorder (Left, Right, Root)

#include <iostream>
using namespace std;

struct node {
	int data;
	struct node *left, *right;
	node (int data) {
		this->data = data;
		left = right = NULL;
	}
};

void pre_order (node *root) {
	// Basecase
	if (root == NULL)
		return;

	cout << root->data << "   ";
	pre_order (root->left);
	pre_order (root->right);
	return;
}

void in_order (node *root) {
	// Basecase
	if (root == NULL)
		return;

	in_order (root->left);
	cout << root->data << "   ";
	in_order (root->right);
	return;
}

void post_order (node *root) {
	// Basecase
	if (root == NULL)
		return;

	post_order (root->left);
	post_order (root->right);
	cout << root->data << "   ";
	return;
}

int main () {
	cout << "######  DFS OR DEPTH FIRST SEARCH USING RECURSION  ######\n";
	// Creating and initializing tree
	struct node* root = new node(1);
	root->left = new node(2);
	root->right = new node(3);
	root->left->left = new node(4);
	root->left->right = new node(5);
	root->right->left = new node(6);
	root->right->right = new node(7);

	// Preorder Tree Traversal
	cout << "1. Pre-Order Traversal of the tree is  :   ";
	pre_order (root);
    // Inorder Tree Traversal
	cout << "\n2. In-Order Traversal of the tree is   :   ";
	in_order (root);
    // Postorder Tree Traversal
	cout << "\n3. Post-Order Traversal of the tree is :   ";
	post_order (root);
	cout << endl;
	return 0;
}