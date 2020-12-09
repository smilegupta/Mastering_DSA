#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node *next;
}*first=NULL;

void create(int A[], int n){
	int i;
	struct Node *t, *last;
	first = new Node;
	first -> data = A[0];
	last = first;
	
	for(i=1; i<n; i++){
		t = new Node;
		t -> data = A[i];
		t->next = NULL;
		last->next = t;
		last = t;
	}
}

void maxElementFinder(struct Node *p){
	int ans = INT_MIN;
	while(p!=NULL){
		if(p->data > ans){
			ans = p->data;
		}
		p=p->next;
	}
	cout<<ans;
	
}


int main(){
	int A[]={1,20,3,4,5,6,7};
	int n = sizeof(A)/sizeof(A[0]);
	create(A,n);
	maxElementFinder(first);
	
}
