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

bool sameLvl(node *root){
    queue<node*> Q;
    int lvl = 0, oldlvl = 0, prevlvl = 0;
    Q.push(root);
    Q.push(NULL);
    while(Q.size() > 1){
        node *temp = Q.front();
        Q.pop();
        if(temp == NULL){
            lvl++;
            Q.push(NULL);
            continue;
        }
        if(temp->left != NULL)
            Q.push(temp->left);
        if(temp->right != NULL)
            Q.push(temp->right);
        if(temp->left == NULL and temp->right == NULL){
            if(oldlvl != 0 and oldlvl != lvl)   
                return false;
            oldlvl = lvl;
        }
    }
    return true;
}

int main() {
	// your code goes here
	node *root = NULL;
	root = add(12);
	root->left = add(5);
	root->left->left = add(3);
	root->left->right = add(9);
	root->left->right->left = add(2);
	root->left->left->left = add(1);
	cout<<sameLvl(root);
	return 0;
}
