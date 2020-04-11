#include <iostream>
using namespace std;

struct node{
    int data;
    node *left, *right;
};

node* add(int data){
    node *newnode = new node;
    newnode->data = data;
    newnode->left = newnode->right = NULL;
    return newnode;
}

int treesize(node *root){
    if(root == NULL)
        return 0;
    return 1 + treesize(root->left) + treesize(root->right);
}

int main() {
	// your code goes here
	node *root = add(1);
	root->left = add(2);
	root->right = add(3);
	root->left->left = add(4);
	root->left->right = add(5);
	cout<<treesize(root);
	return 0;
}
