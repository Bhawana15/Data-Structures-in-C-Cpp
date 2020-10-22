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
	levelOrder(root);
	cout << endl;
	return 0;
}