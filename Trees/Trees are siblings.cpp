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

bool siblings(node *root, int first, int second){
    std::queue<node*> Q;
    int cnt = 0, lvl1 = -1, lvl2 = -1, parent1 = -1, parent2 = -1;
    Q.push(root);
    Q.push(NULL);
    while(Q.size() > 1){
        node *temp = Q.front();
        Q.pop();
        if(temp == NULL){
            cnt++;
            Q.push(NULL);
            continue;
        }
        if(temp->left != NULL){
            if(temp->left->data == first){
                lvl1 = cnt;
                parent1 = temp->data;
            }
            else if(temp->left->data == second){
                lvl2 = cnt;
                parent2 = temp->data;
            }
            Q.push(temp->left);
        }
        if(temp->right != NULL){
            if(temp->right->data == first){
                lvl1 = cnt;
                parent1 = temp->data;
            }
            else if(temp->right->data == second){
                lvl2 = cnt;
                parent2 = temp->data;
            }
            Q.push(temp->right);
        }
    }
    if(lvl1 == lvl2 and parent1 != parent2)
        return true;
    return false;
}

int main() {
	// your code goes here
	node *root = add(6);
	root->left = add(3);
	root->right = add(5);
	root->left->left = add(7);
	root->left->right = add(8);
	root->right->left = add(1);
	root->right->right = add(3);
	cout<<siblings(root, 7, 5);
	return 0;
}
