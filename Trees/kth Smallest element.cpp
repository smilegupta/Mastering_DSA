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

node* addinbst(node *root, int data){
    if(root == NULL)
        return add(data);
    if(data < root->data)
        root->left = addinbst(root->left, data);
    else 
        root->right = addinbst(root->right, data);
    return root;
}

void inorder(node *root, int &ans, int &cnt, int k){
    if(root == NULL)
        return;
    inorder(root->left, ans, cnt, k);
    if(++cnt == k)
        ans = root->data;
    inorder(root->right, ans, cnt, k);
}

int main() {
	// your code goes here
	node *root = addinbst(root, 20);
	root = addinbst(root, 22);
	root = addinbst(root, 8);
	root = addinbst(root, 12);
	root = addinbst(root, 4);
	root = addinbst(root, 10);
	root = addinbst(root, 14);
	int ans = 0, cnt = 0;
	inorder(root, ans, cnt, 5);
	cout<<ans;
	return 0;
}
