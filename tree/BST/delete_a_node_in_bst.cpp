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

BSTNode* deleteNode (BSTNode* root, int data) {
	if (root == nullptr)
		return root;

	if (data < root->data)
		deleted
}

bool printLevel (BSTNode *root, int level) {
	if (root == NULL)
		return false;

	if (level == 1)
	{
		cout << root->data << "  ";
		return true;
	}

	bool left = printLevel (root->left, level-1);
	bool right = printLevel (root->right, level-1);
}

void levelOrder (BSTNode *root) {
	int level = 1;
	while (printLevel(root, level))
		level++;
}

int main() {
	BSTNode *root = new BSTNode(1);
	root->left = new BSTNode(2);
	root->right = new BSTNode(3);
	root->left->left = new BSTNode(4);
	root->left->right = new BSTNode(5);
	root->right->left = new BSTNode(6);
	root->right->right = new BSTNode(7);
	root->left->left->left = new BSTNode(8);
	
	cout << "Actual Tree is :\n"
	levelOrder(root);

	root = deleteNode(root, 3);
	cout << "Node 3 (1 child)  deleted :\n";
	levelOrder(root);

	root = deleteNode(root, 4);
	cout << "Node 4 deleted :\n";
	levelOrder(root);
	cout << endl;

	root = deleteNode(root, 7);
	cout << "Node 7 (leaf) deleted :\n";
	levelOrder(root);
	return 0;
}