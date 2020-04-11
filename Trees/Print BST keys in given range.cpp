#include <iostream>
using namespace std;

struct node{
	int data;
	node *left, *right;
};

node* add(int data){
	node *newnode = new node;
	newnode->data = data;
	return newnode;
}

node* addinbst(node *root, int data){
	if(root == NULL)
		return add(data);
	if(data < root->data)
		root->left = addinbst(root->left, data);
	else 
		root->right = addinbst(root->right, data);
	return root;
}

void inorder(node *root, int left, int right){
	if(root == NULL)
		return;
	inorder(root->left, left, right);
	if(root->data >= left and root->data <= right)
		cout<<root->data<<" ";
	inorder(root->right, left, right);
}

int main() {
	// your code goes here
	node *root = NULL;
	root = addinbst(root, 20);
	root = addinbst(root, 22);
	root = addinbst(root, 8);
	root = addinbst(root, 4);
	root = addinbst(root, 12);
	inorder(root, 10, 22);
	return 0;
}