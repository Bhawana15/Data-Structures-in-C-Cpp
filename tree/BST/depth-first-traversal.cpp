#include <iostream>
using namespace std;

struct BSTNode
{
	int data;
	BSTNode *left, *right;

	BSTNode(int data) {
	    this->data = data;
	    this->left = this->right = nullptr;
    }
};

void pre_order(BSTNode* root) {
	if (root == nullptr)
		return;

	cout << root->data << "  ";
	pre_order(root->left);
	pre_order(root->right);
}

void in_order(BSTNode* root) {
	if (root == nullptr)
		return;
	
	in_order(root->left);
	cout << root->data << "  ";
	in_order(root->right);
}

void post_order(BSTNode* root) {
	if (root == nullptr)
		return;
	
	post_order(root->left);
	post_order(root->right);
	cout << root->data << "  ";
}

void depth_first (BSTNode *root) {
	cout << "PRE-ORDER TRAVERSAL  :  ";
	pre_order(root);

	cout << "\nIN-ORDER TRAVERSAL   :  ";
	in_order(root);

	cout << "\nPOST-ORDER TRAVERSAL :  ";
	post_order(root);
}

int main() {
	BSTNode *root = new BSTNode(1);
	root->left = new BSTNode(2);
	root->right = new BSTNode(3);
	root->left->left = new BSTNode(4);
	root->left->right = new BSTNode(5);
	root->right->left = new BSTNode(6);
	root->right->right = new BSTNode(7);
	depth_first(root);
	cout << endl;
	return 0;
}