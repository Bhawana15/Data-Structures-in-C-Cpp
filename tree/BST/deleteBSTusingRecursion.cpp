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

BSTNode *root = nullptr;

void deleteTree(BSTNode* root) {
	if (root == nullptr)
		return;
	deleteTree(root->left);
	deleteTree(root->right);
	cout << "Deleting " << root->data << " \n";
	delete root;
	root = nullptr;
}

int main() {
	root = new BSTNode(1);
	root->left = new BSTNode(2);
	root->right = new BSTNode(3);
	root->left->left = new BSTNode(4);
	root->left->right = new BSTNode(5);
	root->right->left = new BSTNode(6);
	root->right->right = new BSTNode(7);
	deleteTree(root);
	return 0;
}