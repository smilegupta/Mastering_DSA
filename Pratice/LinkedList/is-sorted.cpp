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

int elementsSorted(struct Node *p){
	int x = INT_MIN;
	while(p!=NULL){
		if(p->data<x)
			return 0;
		x=p->data;
		p=p->next;	
	}
	return 1;
		
}


int main(){
	int A[]={1,2,3,4,5,6,7,1};
	int n = sizeof(A)/sizeof(A[0]);
	create(A,n);
	cout<<elementsSorted(first);
	
}
