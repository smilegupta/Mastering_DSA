#include <bits/stdc++.h>
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

void maxintree(node *root, int &MAX){
    if(root != NULL){
        maxintree(root->left, MAX);
        if(root->data > MAX)
            MAX = root->data;
        maxintree(root->right, MAX);
    }
}

int main() {
	// your code goes here
	node *root = add(1);
	root->left = add(2);
	root->right = add(3);
	root->left->left = add(4);
	root->left->right = add(5);
	int MAX = INT_MIN;
	maxintree(root, MAX);
	cout<<MAX;
	return 0;
}
