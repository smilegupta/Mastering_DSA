#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
	struct node *parent;
};

struct node* newNode(int data) 
{ 
  struct node *temp = new node();
  temp->data   = data; 
  temp->left   = NULL; 
  temp->right  = NULL; 
  temp->parent = NULL; 
    
  return(temp); 
} 

struct node* insert(struct node* node, int data) 
{ 
  if (node == NULL) 
    return(newNode(data)); 
  else
  { 
    struct node *temp;   
    if (data <= node->data) 
    {     
         temp = insert(node->left, data); 
         node->left  = temp; 
         temp->parent= node; 
    } 
    else
    { 
        temp = insert(node->right, data); 
        node->right = temp; 
        temp->parent = node; 
    }     
    return node; 
  } 
}

void spiral(struct node* node)
{
	if(node==NULL) return;
	
	stack<struct node *>q1;
	stack<struct node *>q2;
	q1.push(node);
	while(!q1.empty() || !q2.empty())
	{
		while(!q1.empty()){
			struct node *temp=q1.top();
			q1.pop();
			cout<<temp->data<<" ";
			 if (temp->left) 
                q2.push(temp->left); 
            if (temp->right) 
                q2.push(temp->right); 
		}
		while(!q2.empty()){
			struct node *temp=q2.top();
			q2.pop();
			cout<<temp->data<<" ";
			 if (temp->right) 
                q1.push(temp->right); 
            if (temp->left) 
                q1.push(temp->left); 
		}
	}
}

int main(){
	struct node *root=NULL;
	root=insert(root,20);
	root=insert(root,10);
	root=insert(root,22);
	root=insert(root,5);
	root=insert(root,15);
	root=insert(root,21);
	root=insert(root,24);
	spiral(root);
	
}
