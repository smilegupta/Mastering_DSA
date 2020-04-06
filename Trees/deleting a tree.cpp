#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
}; 
struct node* newNode(int data)
{
	struct node *temp=new node();
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
} 
void inorder(struct node* node){
	if(node==NULL)
	return;
	inorder(node->left);
	inorder(node->right);
	cout<<node->data<<" ";
}
void deleteTree(struct node* node){
	if(node==NULL) return;
	deleteTree(node->left);
	deleteTree(node->right);
	cout<<"Element deleting: "<<node->data<<" "<<endl;
	free(node);
}
int main()
{
	struct node *root=newNode(1);
	root->left=newNode(2);
	root->right=newNode(3);
	inorder(root);
	cout<<endl;
	deleteTree(root);
	cout<<"Tree Deleted";
}
