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
	
	return (temp);	
}

void inorder(struct node* node){
	if (node==NULL)
	return;
	inorder(node->left);
	cout<<node->data<<" ";
	inorder(node->right);
}
void preorder(struct node* node){
	if(node==NULL)
	return;
	cout<<node->data<<" ";
	preorder(node->left);
	preorder(node->right);
}
void postorder(struct node* node){
	if(node==NULL)
	return;
	postorder(node->left);
	postorder(node->right);
	cout<<node->data<<" ";
}

int sizeoftree(struct node* node){
	if(node==NULL)
	return 0;
	else 
	return (sizeoftree(node->left)+1+sizeoftree(node->right));
}

int main()
{
	struct node *root=newNode(25);
	root->left=newNode(15);
	root->right=newNode(50);
	root->left->left=newNode(10);
	root->left->left->left=newNode(4);
	root->left->left->right=newNode(12);
	root->left->right=newNode(22);
	root->left->right->left=newNode(18);
	root->left->right->right=newNode(24);
	root->right->left=newNode(35);
	root->right->left->left=newNode(31);
	root->right->left->right=newNode(44);
	root->right->right=newNode(70);
	root->right->right->left=newNode(66);
	root->right->right->right=newNode(90);
	cout<<"PreOrder:"<<" ";
	preorder(root);
	cout<<endl<<"InOrder:"<<" ";;
	inorder(root);
	cout<<endl<<"PostOrder:"<<" ";
	postorder(root);
	cout<<endl<<"Size of the tree is: "<<sizeoftree(root);
}


