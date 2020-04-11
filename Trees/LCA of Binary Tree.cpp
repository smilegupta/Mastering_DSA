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

bool findPath(node *root, vector<int> &v, int n){
	if(root == NULL)
		return false;
	v.push_back(root->data);
	if(n == root->data)
		return true;
	if(findPath(root->left, v, n) or findPath(root->right, v, n))
		return true;
	v.pop_back();
	return false;
}

int main() {
	// your code goes here
	node *root1 = NULL;
	root1 = add(1);
	root1->left = add(2);
	root1->right = add(3);
	root1->left->left = add(4);
	root1->left->right = add(5);
	root1->right->left = add(6);
	root1->right->right = add(7);
	vector<int> v1, v2;
	findPath(root1, v1, 2);
	findPath(root1, v2, 4);
	int i = 0, ans;
	while(1){
	    if(!v1.size() or !v2.size())
	        break;
	    if(v1[i] == v2[i])
	        ans = v1[i];
	    else 
	    	break;
	    i++;
	}
	cout<<ans;
	return 0;
}
