#include <iostream>
using namespace std;

struct node{
    int data;
    node *left, *right;
};

int pre;

node* add(int data){
    node *newnode = new node;
    newnode->data = data;
    newnode->left = newnode->right = NULL;
    return newnode;
}

void isbst(node *root, bool &bst){
    if(root == NULL)
        return;
    isbst(root->left, bst);
    if(pre > root->data)
        bst = false;
    pre = root->data;
    isbst(root->right, bst);
}

int main() {
	// your code goes here
	node *root = add(3);
	root->left = add(2);
	root->right = add(5);
	root->left->left = add(1);
	root->left->right = add(4);
	bool bst = true;
	isbst(root, bst);
	cout<<bst;
	return 0;
}
