#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node* newNode(int data)
{
	struct node *temp = new node();
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	
	return(temp);
}
void print_node(node* temp)
{
	cout<<temp->data;
}

int main()
{
	struct node *root=newNode(1);
	root->left=newNode(2);
	root->right=newNode(3);	
	root->left->right=newNode(5);
	root->left->left=newNode(4);
	
	print_node(root->left->left);
	
}
