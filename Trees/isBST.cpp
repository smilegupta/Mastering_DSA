#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};
struct node* newNode(int data){
	struct node *temp=new node();
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
bool isBSTUtl(struct node* node, int min, int max){
	if(node==NULL)
	return true;
	
	if(node->data<min || node->data>max)
	return false;
	
	return (isBSTUtl(node->left, min, node->data-1) && isBSTUtl(node->right, node->data+1, max));
}
bool isBST(struct node* node){
	return isBSTUtl(node, INT_MIN, INT_MAX);
}
int main(){
	struct node *root=newNode(20);
	root->left=newNode(10);
	root->left->left=newNode(5);
	root->left->right=newNode(15);
	root->right=newNode(22);
	root->right->left=newNode(21);
	root->right->right=newNode(24);
	
	isBST(root)==1?cout<<"Tree is a BST" :"Tree is not a BST";
}
