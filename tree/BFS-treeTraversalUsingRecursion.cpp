// BREADTH FIRST TRAVERSAL OR LEVEL ORDER TRAVERSAL USING RECURSION IN TREE

#include <iostream>
using namespace std;

class node {
public:
	int data;
	node *left, *right;
};

// Funciton to calculate the height of the tree
int height (node *temp_node) {
	if (temp_node != NULL) {
		int lheight = height (temp_node->left);
		int rheight = height (temp_node->right);

		if (lheight > rheight)
			return (lheight + 1);
		else 
			return (rheight + 1);
	}
	else 
		return 0;
}

// Function to print all nodes at a particular level
void printGivenLevel (node *root, int level) {
	if (root == NULL)
	    return;
	if (level == 1)
		cout << root->data << "  ";
	else if (level > 1) {
		printGivenLevel (root->left, level - 1);
		printGivenLevel (root->right, level - 1);
	}
	return;
}

void breadth_first_traversal (node *root) {
    int h = height (root);
    for (int i = 1 ; i <= h ; i++)
    	printGivenLevel (root, i);
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
	cout << "######  BREADTH FIRST TRAVERSAL OR LEVEL ORDER TRAVERSAL USING RECURSION IN TREE  ######\n";
	node *root = new_node (1);
	root->left = new_node (2);
	root->right = new_node (3);
	root->left->left = new_node (4);
	root->right->right = new_node (7);
	breadth_first_traversal (root);
	cout << endl;
	return 0;
}