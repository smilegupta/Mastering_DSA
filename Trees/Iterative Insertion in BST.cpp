#include<iostream>
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
	node *curr = root, *prev = NULL;
	while(1){
		if(curr == NULL){
			if(prev == NULL)
				prev = add(data);
			else if(data < prev->data)
				prev->left = add(data);
			else 
				prev->right = add(data);
			break;
		}
		prev = curr;
		curr = data < curr->data ? curr->left : curr->right;
	}
	return prev;
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
	root = addinbst(root, 50);
	addinbst(root, 30);
	addinbst(root, 20);
	addinbst(root, 40);
	addinbst(root, 70);
	addinbst(root, 60);
	addinbst(root, 80);
	inorder(root);
}