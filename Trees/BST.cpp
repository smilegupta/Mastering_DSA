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

void inorder(struct node* node){
	if(node==NULL)
	return;
	inorder(node->left);
	cout<<node->data<<" ";
	inorder(node->right);
}
int main(){
	struct node *root=NULL;
	root=insert(root,20);
	root=insert(root,10);
	root=insert(root,29);
	inorder(root);
}
