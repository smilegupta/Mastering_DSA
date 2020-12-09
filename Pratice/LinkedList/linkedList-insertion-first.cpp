// Insertation done right at first and end position


#include<bits/stdc++.h>
using namespace std;
struct Node {
	int data;
	struct Node *next;
}*first = NULL, *last=NULL;

void create(int A[], int n){
	first = new Node;
	first -> data = A[0];
	first -> next = NULL;
	struct Node *t;
	last = first;
	for(int i=1; i<n; i++){
		t = new Node;
		t->data = A[i];
		t->next = NULL;
		last -> next = t;
		last = t;
	}
	
}
void display(struct Node *p){
	while(p!=NULL){
		cout<<p->data<<" ";
		p=p->next;
	}
}
void insertFirst(int value){
	struct Node *t;
	t =  new Node;
	t->data=value;
	t->next=first;
	first = t;
}


void insertEnd(int value){
	struct Node *t;
	t = new Node;
	t->data = value;
	t->next = NULL;
	last->next = t;
	last = t;
}

int main(){
	int A[]={10,11,12,13,14,15};
	int n = sizeof(A)/sizeof(A[0]);
	create(A,n);
	display(first);
	cout<<endl;
	insertFirst(9);
	insertFirst(8);
	insertFirst(7);
	display(first);
	cout<<endl;
	insertFirst(6);
	insertEnd(16);
	display(first);
	
}
