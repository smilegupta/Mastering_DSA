#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
	struct node *parent;
};
struct node* newNode(int data){
	struct node *temp=new node();
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	temp->parent=NULL;	
}

struct node* insert(struct node* root, int data){
	if(root==NULL)
	return (newNode(data));
	else{
		struct node *temp;
		if(data<=root->data){
			temp=insert(root->left,data);
			root->left=temp;
			temp->parent=root;
		}
		else{
			temp=insert(root->right,data);
			root->right=temp;
			temp->parent=root;
		}
	}
	return root;
}

void levelorder(struct node* root){
	if(root==NULL) return;
	queue<struct node *>q;
	q.push(root);
	while(q.empty()==false)
	{
		struct node *node=q.front();
		cout<<node->data<<" ";
		q.pop();
		if(node->left!=NULL)
		q.push(node->left);
		if(node->right!=NULL)
		q.push(node->right);
	}
}
int main(){
	struct node *root=NULL;
	root=insert(root,20);
	root=insert(root,10);
	root=insert(root,29);
	levelorder(root);
	return 0;
}
