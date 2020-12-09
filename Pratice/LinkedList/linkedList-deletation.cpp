// Deleting at first and last
#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node *next;
}*first = NULL, *last = NULL;

void create(int A[], int n){
	first = new Node;
	first->data=A[0];
	struct Node *t;
	first->next=NULL;
	last  = first;
	for(int i=1; i<n; i++){
		t = new Node;
		t->data=A[i];
		t->next = NULL;
		last->next =t;
		last = t;
	}
}

void display(struct Node *p){
	while(p!=NULL){
		cout<<p->data<<" ";
		p=p->next;
	}
}

void deleteFront(){
	struct Node *q;
	q = first;
	first = first -> next;
	free(q);
}


void deleteEnd(){
	struct Node *p = first;
	while(p->next->next != NULL){
		p=p->next;	
	}
	p->next = NULL;
	last = p;
}

int main(){
	int A[]={10,11,12,13,14,15};
	int n = sizeof(A)/sizeof(A[0]);
	create(A,n);
	display(first);
	cout<<endl;
	deleteFront();
	display(first);
	cout<<endl;
	deleteEnd();
	display(first);
}

