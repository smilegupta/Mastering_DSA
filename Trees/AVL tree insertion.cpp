#include<iostream>
using namespace std;

struct node{
	int data, height;
	node *left, *right;
};

node* add(int data){
	node *newnode = new node;
	newnode->data = data;
	newnode->left = newnode->right = NULL;
	newnode->height = 1;
	return newnode;
}

int height(node *root){
	if(root == NULL)
		return 0;
	return root->height;
}

int getbalance(node *root){
	if(root == NULL)
		return 0;
	return height(root->left) - height(root->right);
}

node* leftrotate(node *root){
	node *first = root->right;
	node *second = first->left;
	first->left = root;
	root->right = second;
	first->height = 1 + max(height(first->left), height(first->right));
	root->height = 1 + max(height(root->left), height(root->right));
	return first;
}

node *rightrotate(node *root){
	node *first = root->left;
	node *second = first->right;
	first->right = root;
	root->left = second;
	first->height = 1 + max(height(first->left), height(first->right));
	root->height = 1 + max(height(root->left), height(root->right));
	return first;
}

node* addinavl(node *root, int data){
	if(root == NULL)
		return add(data);
	if(data < root->data)
		root->left = addinavl(root->left, data);
	else
		root->right = addinavl(root->right, data);
		
	root->height = 	1 + max(height(root->left), height(root->right));
	int balance = getbalance(root);
	if(balance > 1 and data < root->left->data)
		return rightrotate(root);
	if(balance > 1 and data > root->left->data){
		root->left = leftrotate(root->left);
		return rightrotate(root);
	}
	if(balance < -1 and data > root->right->data)
		return leftrotate(root);
	if(balance < -1 and data < root->right->data){
		root->right = rightrotate(root->right);
		return leftrotate(root);
	}
	return root;
}

void inorder(node *root){
	if(root == NULL)
		return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

int main(){
	node *root = NULL;
	root = addinavl(root, 10);
	root = addinavl(root, 20);
	root = addinavl(root, 30);
	root = addinavl(root, 40);
	root = addinavl(root, 50);
	root = addinavl(root, 25);
	root = addinavl(root, 35);
	root = addinavl(root, 5);
	root = addinavl(root, 15);
	inorder(root);
}