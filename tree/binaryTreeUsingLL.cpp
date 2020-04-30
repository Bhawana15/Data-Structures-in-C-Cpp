// BINARY TREE USING LINKED LIST

#include <iostream>
using namespace std;

typedef struct NODE 
{
	int data;
	struct NODE* left;
	struct NODE* right;
}node;

node* new_node (int data) {
	node* p = new node;
	p->data = data;
	p->left = NULL;
	p->right = NULL;
	cout << "New Node added - " << data << endl;
	return p;
}

int main() {
	cout << "######  BINARY TREE USING LINKED LIST  ######\n";
	node* root = new_node (1);
	root->left = new_node (2);
	root->right = new_node (3);
	root->left->left = new_node (4);
	root->right->right = new_node (7);
	return 0;
}