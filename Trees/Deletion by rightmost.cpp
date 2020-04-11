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
    if(root == NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

node* removenode(node *root, int data){
    std::queue<node*> Q;
    int cnt = 0;
    Q.push(root);
    node *rightmost = root, *target = root, *prev = root;
    while(!Q.empty()){
        node *temp = Q.front();
        Q.pop();
        if(temp->data == data)
            target = temp;
        if(temp->left != NULL){
            Q.push(temp->left);
            prev = temp;
            rightmost = temp->left;        
            cnt = 1;
        }
        if(temp->right != NULL){
            Q.push(temp->right);
            prev = temp;
            rightmost = temp->right;
            cnt = 2;
        }
    }
    swap(target->data, rightmost->data);
    if(cnt == 1)
        prev->left = NULL;
    else 
        prev->right = NULL;
    delete rightmost;
    return root;
}

int main() {
	// your code goes here
	node *root = add(1);
	root->left = add(2);
	root->right = add(3);
	root->left->left = add(4);
	root->left->right = add(5);
	inorder(root);
	root = removenode(root, 1);
	cout<<endl;
	inorder(root);
	return 0;
}
