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

bool sumproperty(node *root){
    queue<node*> Q;
    Q.push(root);
    while(!Q.empty()){
        node *temp = Q.front();
        Q.pop();
        int sum1 = 0, sum2 = 0;
        if(temp->left != NULL){
            sum1 = temp->left->data;
            Q.push(temp->left);
        }
        if(temp->right != NULL){
            sum2 = temp->right->data;
            Q.push(temp->right);
        }
        if((temp->data != sum1 + sum2) and (temp->left != NULL or temp->right != NULL))
            return false;
    }
    return true;
}

int main() {
	// your code goes here
	node *root = add(10);
	root->left = add(8);
	root->right = add(2);
	root->left->left = add(3);
	root->left->right = add(5);
	root->right->right = add(2);
    if(sumproperty(root))
        cout<<"TRUE";
    else
        cout<<"FALSE";
	return 0;
}
