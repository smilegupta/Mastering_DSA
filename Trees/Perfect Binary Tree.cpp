#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left, *right;
};

node* add(int data){
    node *newnode = new node;
    newnode->data = data;
    return newnode;
}

bool perfectBinary(node *root){
    queue<node*> Q;
    Q.push(root);
    Q.push(NULL);
    int cnt = 0, lvl = -1;
    while(Q.size() > 1){
        node *temp = Q.front();
        Q.pop();
        if(temp == NULL){
            cnt++;
            Q.push(NULL);
        }
        else{
            if(temp->left == NULL and temp->right == NULL)
                if(lvl == -1)
                    cnt = lvl;
                else if(cnt != lvl)
                    return false;
            if((temp->left != NULL and temp->right == NULL) or (temp->left == NULL and temp->right != NULL))
                return false;
            if(temp->left != NULL)
                Q.push(temp->left);
            if(temp->right != NULL)
                Q.push(temp->right);
        }
    }
    return true;
}


int main() {
	// your code goes here
	node *root = add(1);
	root->left = add(2);
	root->right = add(3);
	root->left->right = add(4);
	root->right->left = add(5);
	root->right->right = add(6);
	root->left->left = add(7);
	cout<<perfectBinary(root);
	return 0;
}
