#include <iostream>
using namespace std;

struct NODE 
{
	int data;
	struct NODE* left;
	struct NODE* right;
	NODE(int data) {
		this->data = data;
		right = left = nullptr;
	}
};

void insert_node(NODE* root, int val) {
	queue <NODE*> q;
	q.push(root);

	while(!q.empty()) {
		temp = q.front();
		q.pop();

		if (!temp->left) {
			temp->left = new NODE(val);
			break;
		}
		else
			q.push(temp->left);

		if (!temp->right){
			temp->right = new NODE(val);
			break;
		}
		else
			q.push(temp->right);
	}
}

void inorder_traversal (NODE* root, int val) {
	if(root == nullptr)
		return;
	inorder_traversal(root->left);
	cout << root->data << "  ";
	inorder_traversal(root->right);
}

int main() {
	cout << "######  BINARY TREE BASIC PROGRAMS  ######\n";
	NODE* root = new NODE (10);
	root->left = new NODE (11);
	root->right = new NODE (9);
	root->left->left = new NODE (7);
	root->right->left = new NODE (15);
	root->right->right = new NODE (8);

	cout << "Inorder traversal before insertion:"; 
    inorder(root); 
  
    int key = 12; 
    insert(root, key); 
  
    cout << endl; 
    cout << "Inorder traversal after insertion:"; 
    inorder(root); 
    
	return 0;
}