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

void levelorder(node *root){
    std::queue<node*> Q;
    Q.push(root);
    while(!Q.empty()){
        node *temp = Q.front();
        cout<<temp->data<<" ";
        Q.pop();
        if(temp->left != NULL)
            Q.push(temp->left);
        if(temp->right != NULL)
            Q.push(temp->right);
    }
}


int main() {
	// your code goes here
	node *root = NULL;
	root = add(1);
	root->left = add(2);
	root->right = add(3);
	root->left->left = add(4);
	root->left->right = add(5);
	levelorder(root);
	return 0;
}
