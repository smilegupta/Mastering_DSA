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

node* addinbst(node *root, int data){
    if(root == NULL)
        return add(data);
    if(data < root->data)
        root->left = addinbst(root->left, data);
    else
        root->right = addinbst(root->right, data);
    return root;
}

void findinbst(node *root, int num, vector<int> &v){
    if(root == NULL)
        return;
    v.push_back(root->data);
    if(num < root->data)
        findinbst(root->left, num, v);
    else if(num > root->data)
        findinbst(root->right, num, v);
    else 
        return;
}

int main() {
	// your code goes here
	node *root = addinbst(root, 20);
	root = addinbst(root, 22);
	root = addinbst(root, 8);
	root = addinbst(root, 12);
	root = addinbst(root, 14);
	root = addinbst(root, 10);
	root = addinbst(root, 4);
	std::vector<int> v1, v2;
	int first = 10, second = 22, ans = 0;
	findinbst(root, first, v1);
	findinbst(root, second, v2);
	for(int i = 0; i < v1.size(); i++)
	    for(int j = 0; j < v2.size(); j++)
	        if(v1[i] == v2[j])
	            ans = v1[i];
	cout<<ans;
	return 0;
}
