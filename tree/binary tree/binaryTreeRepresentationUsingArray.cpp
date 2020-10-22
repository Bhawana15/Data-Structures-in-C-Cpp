// REPRESENTATION OF BINARY TREE USING ARRAY

#include <iostream>
using namespace std;

char tree[10];

void root (char node) {
	if (tree[0] != '\0')
		cout << "Tree already has a root\n";
	else
		tree[0] = node;
	return;
}

void left_child (char node, int parent) {
	if (tree[parent] == '\0')
		cout << "Parent does exist, so could not set " << node << " as left child\n";
	else 
		tree[2 * parent + 1] = node;
	return;
}

void right_child (char node, int parent) {
	if (tree[parent] == '\0')
		cout << "Parent does exist, so could not set " << node << " as right child\n";
	else 
		tree[2 * parent + 2] = node;
	return;
}

void print_tree (){
	cout << "\nPrinting tree in array form :\n";
	for (int i = 0 ; i < 10 ; i++) {
		if (tree[i] != '\0')
			cout << tree[i] << " ";
		else
			cout << "- ";
	}
	cout << endl;
	return;
}

int main() {
	cout << "##### REPRESENTATION OF BINARY TREE USING ARRAY #####" << endl;
	
	// set 'A' as root element
	root ('A');

	// set left and right children
	left_child ('B', 0);
	right_child ('C', 0);
	left_child ('D', 1);
	left_child ('E', 5);
	right_child ('F', 5);
	right_child ('G',2);

	// Printing the tree
    print_tree ();
	return 0;
}