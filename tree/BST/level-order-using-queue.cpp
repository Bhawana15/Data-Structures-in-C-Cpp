#include <iostream>
#include <queue>
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

void levelOrder (BSTNode *root) {
	if (root == NULL)
		return;

	queue<BSTNode*> q;
	q.push(root);

	while (!q.empty()) {
		BSTNode* node = q.front();
		cout << node->data << "  ";
		q.pop();

		if (node->left != nullptr)
			q.push(node->left);
		if (node->right != nullptr)
			q.push(node->right);
	}
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