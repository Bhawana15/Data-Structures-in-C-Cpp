#include<bits/stdc++.h>
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

bool isSubTreeLesser (BSTNode* root, int val) {
	if (root == nullptr) return true;

	if (root->data <= val && isSubTreeLesser(root->left, val) 
		&& isSubTreeLesser(root->right, val))
		return true;
	else 
		return false;
}

bool isSubTreeGreater (BSTNode* root, int val) {
	if (root == nullptr) return true;
	if(root->data >= val && isSubTreeGreater(root->left, val) 
		&& isSubTreeGreater(root->right, val))
		return true;
	else
		return false;
}

bool is_bst(BSTNode* root) {
	if(root == nullptr) return true;

	if(is_bst(root->left) && is_bst(root->right) && 
		isSubTreeLesser(root->left, root->data) && 
		isSubTreeGreater(root->right, root->data))
		return true;
	else
		return false;
}

int main() {
	BSTNode *root = new BSTNode(5);
	root->left = new BSTNode(3);
	root->right = new BSTNode(6);
	root->left->left = new BSTNode(1);
	root->left->right = new BSTNode(4);
	root->right->left = new BSTNode(5);
	root->right->right = new BSTNode(7);
	cout << is_bst(root) << endl;
	return 0;
}