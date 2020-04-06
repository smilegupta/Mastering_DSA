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
}
int isIdentical(struct node* a, struct node* b)
{
	if(a==NULL&& b==NULL)
	return 1;
	if(a!=NULL&&b!=NULL)
	{
		return (a->data==b->data && isIdentical(a->left, b->left) && isIdentical(a->right, b->right));
	}
	else
	return 0;
}
int main(){
	struct node *a=newNode(1);
	a->left=newNode(2);
	a->right=newNode(3);
	struct node *b=newNode(1);
	b->left=newNode(2);
	b->right=newNode(3);
//	struct node *c=NULL;
	isIdentical(a,b)==1?cout<<"Tree are identical":cout<<"Tree are not identical";
	
}
