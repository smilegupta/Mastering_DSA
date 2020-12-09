//Inseration at specific potion

#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	struct Node *next;
}*first = NULL;

void create(int A[], int n){
	first = new Node;
	first->data=A[0];
	struct Node *last, *t;
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


void insertAfter(struct Node *p, int value, int pos){
	struct Node *t;
	int count = 1;
	while(p!=NULL){
		if(count == pos){
			t = new Node;
			t->data = value;
			t->next = p->next;
			p->next = t;
		}
		p=p->next;
		count++;
	}
}


void insertatPos(struct Node *p, int value, int pos){
	struct Node *t;
	int count = 1;
	while(p!=NULL){
		if(pos == 1){
			t =  new Node;
			t->data=value;
			t->next=first;
			first = t;
			break;
		}
		else if(count == pos-1){
			t = new Node;
			t->data = value;
			t->next = p->next;
			p->next = t;
		}
		p=p->next;
		count++;
	}
}

int main(){
	int Array[]={1,2,3,4,5};
	int n = sizeof(Array)/sizeof(Array[0]);
	create(Array,n);
	display(first);
	insertatPos(first,50,1);
	insertatPos(first,150,2);
	cout<<endl;
	display(first);
	cout<<endl;
	insertAfter(first,100,1);
	display(first);
}
