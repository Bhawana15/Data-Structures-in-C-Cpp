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

int min_in_bst(BSTNode* root) {
	if (root == nullptr)
		return -1;
	while(root->left != nullptr)
	    root = root->left;
	return root->data;    
}

int max_in_bst(BSTNode* root) {
	if (root == nullptr)
		return -1;
	while(root->right != nullptr)
	    root = root->right;
	return root->data; 
}

int main() {
	BSTNode *root = new BSTNode(30);
	root->left = new BSTNode(20);
	root->right = new BSTNode(40);
	root->left->left = new BSTNode(10);
	root->left->right = new BSTNode(25);
	root->right->left = new BSTNode(35);
	root->right->right = new BSTNode(45);
	cout << "MINIMUM IS : " << min_in_bst(root);
	cout << "\nMAXIMUM IS : " << max_in_bst(root) << endl;
	return 0;
}