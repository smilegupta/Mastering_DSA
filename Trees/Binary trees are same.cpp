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

bool aresame(node *root, node *root1){
    if(root1 == NULL and root == NULL)
        return true;
    if(root == NULL or root1 == NULL)
        return false;
    return root->data == root1->data and aresame(root->left, root1->left)
    and aresame(root->right, root1->right);
}

void anothersame(node *root, node *root1, bool &same){
    if(root == NULL and root1 == NULL)
        return;
    if(root == NULL or root1 == NULL){
        same = false;
        return;
    }
    anothersame(root->left, root1->left, same);
    if(root1->data != root->data)
        same = false;
    anothersame(root->right, root1->right, same);
}

int main() {
	// your code goes here
	node *root = add(1);
	root->left = add(2);
	root->right = add(3);
	root->left->left = add(4);
	root->left->right = add(5);
	node *root1 = add(1);
	root1->left = add(2);
	root1->right = add(30);
	root1->left->left = add(4);
	root1->left->right = add(5);
	cout<<aresame(root, root1);
	bool same = true;
	anothersame(root, root1, same);
	cout<<same;
	return 0;
}
