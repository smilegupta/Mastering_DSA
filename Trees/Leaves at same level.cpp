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

bool leaflvl(node *root){
    std::queue<node*> Q;
    Q.push(root);
    Q.push(NULL);
    int lvl = -1, cnt = 0;
    while(Q.size() > 1){
        node *temp = Q.front();
        Q.pop();
        if(temp == NULL){
            Q.push(NULL);
            cnt++;
        }
        else{
            if(temp->left == NULL and temp->right == NULL)
                if(lvl == -1)
                    lvl = cnt;
                else
                    if(lvl != cnt)
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
	root->left->left = add(4);
	root->left->right = add(5);
	root->right->left = add(6);
	root->right->right = add(7);
	cout<<leaflvl(root);
	return 0;
}
