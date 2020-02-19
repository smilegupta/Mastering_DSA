#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left, *right;
};

node* addnode(int data){
	node *newnode = new node;
	newnode->data=data;
	newnode->left=newnode->right=NULL;
	return  newnode;
}

node* addinBST(node *root, int data){
	if(root==NULL)
		root=addnode(data);
	else if(data<root->data)
		root->left=addinBST(root->left,data);
	else
		root->right=addinBST(root->right,data);
	return root;
}

void inorder(node *root){
	if(root==NULL)
		return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
bool bsearch(node *root, int data){
	if(root!=NULL){
	if(data==root->data)
		return true;
	else if(data<root->data)
		return bsearch(root->left,data);
	else
		return bsearch(root->right,data);
	}
	return false;
	
}
int main()
{
	node *root=NULL;
	root=addinBST(root,10);
	root=addinBST(root,5);
	root=addinBST(root,15);
	root=addinBST(root,0);
	root=addinBST(root,20);
	inorder(root);
	cout<<endl<<"Root: "<<root->data<<endl;
	cout<<"Root Left: "<<root->left->left->data<<endl;
	cout<<"Root Right: "<<root->right->right->data<<endl;
	
	cout<<bsearch(root,20);
}
