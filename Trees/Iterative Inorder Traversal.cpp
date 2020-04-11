#include <bits/stdc++.h>
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

void inorder(node *root){
    stack<node*> s;
    node *curr = root;
    while(curr != NULL or !s.empty()){
        while(curr != NULL){
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        cout<<curr->data<<" ";
        curr = curr->right;
    }
}

int main() {
	// your code goes here
	node *root = add(1);
	root->left = add(2);
	root->right = add(3);
	root->left->left = add(4);
	root->left->right = add(5);
	inorder(root);
	return 0;
}
