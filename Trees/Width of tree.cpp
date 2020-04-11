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

int width(node *root){
    int MAX = 0, cnt = 0;
    queue<node*> Q;
    Q.push(root);
    Q.push(NULL);
    while(Q.size() > 1){
        node *temp = Q.front();
        Q.pop();
        if(temp == NULL){
            Q.push(NULL);
            if(cnt > MAX)
                MAX = cnt;
            cnt = 0;
            continue;
        }
        cnt++;
        if(temp->left != NULL)
            Q.push(temp->left);
        if(temp->right != NULL)
            Q.push(temp->right);
    }
    if(cnt > MAX)
        MAX = cnt;
    return MAX;
}


int main() {
	// your code goes here
	node *root = add(1);
	root->left = add(2);
	root->right = add(3);
	root->left->left = add(4);
	root->left->left->left = add(9);
	root->left->left->right = add(10);
	root->left->right = add(5);
	root->right->right = add(8);
	root->right->right->left = add(6);
	root->right->right->right = add(7);
	cout<<width(root);
	return 0;
}
