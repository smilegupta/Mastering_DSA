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

node* addinbst(node *root, int data){
    if(root == NULL)
        return add(data);
    if(data < root->data)
        root->left = addinbst(root->left, data);
    else
        root->right = addinbst(root->right, data);
    return root;
}

int findinbst(node *root, int first, int second){
    if(root == NULL)
        return -1;
    if(root->data > first and root->data > second)
        return findinbst(root->left, first, second);
    else if(root->data < first and root->data < second)
        return findinbst(root->right, first, second);
    return root->data;
}


int main() {
	// your code goes here
	node *root = addinbst(root, 20);
	root = addinbst(root, 22);
	root = addinbst(root, 8);
	root = addinbst(root, 12);
	root = addinbst(root, 14);
	root = addinbst(root, 10);
	root = addinbst(root, 4);
	std::vector<int> v1, v2;
	int first = 10, second = 22;
	cout<<findinbst(root, first, second);
	return 0;
}
