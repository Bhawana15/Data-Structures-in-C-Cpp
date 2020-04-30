// BREADTH FIRST TRAVERSAL OR LEVEL ORDER TRAVERSAL USING QUEUE USING STL IN TREE

#include <bits/stdc++.h>
using namespace std;

// Binary Tree Node
typedef struct NODE {
	int data;
	struct NODE *left, *right;
} node;

void breadth_first_traversal (node *root) {
	// Base Case
	if (root == NULL) 
		return;

	// Create an empty queue using STL
	queue <node *> q;
    // Enqueue root
	q.push(root);

	while (!q.empty()) {
		// Create a node that will point to the front of the queue
		// Then print it and dequeue it
		node *fr = q.front();
		cout << fr->data << "   ";
		q.pop();

		// Now enqueue left child
		if (fr->left != NULL)
			q.push(fr->left);

		// Now enqueue right child
		if (fr->right != NULL)
			q.push(fr->right);
	}
	return;
}

// Creates and initializes new node
node* new_node (int data) {
	node *temp = new node;
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

int main () {
	cout << "######  BREADTH FIRST TRAVERSAL OR LEVEL ORDER TRAVERSAL USING QUEUE USING STL IN TREE  ######\n";
	node *root = new_node (1);
	root->left = new_node (2);
	root->right = new_node (3);
	root->left->left = new_node (4);
	root->right->right = new_node (7);
	breadth_first_traversal (root);
	cout << endl;
	return 0;
}