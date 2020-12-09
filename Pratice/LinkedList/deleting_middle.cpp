#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	struct Node *next;
}*first=NULL;
void create(int A[], int n)
{
	struct Node *t, *last;
	first=new Node;
	first->data=A[0];
	first->next=NULL;
	last=first;
	for(int i=1; i<n;i++)
	{ 
		t=new Node;
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;	
	}
}

void print(struct Node *p){
	while(p!=NULL){
		cout<<p->data<<" ";
		p=p->next;
	}
}


void deletingMiddle(struct Node *p){
	struct Node *slow_pointer, *prev;
	slow_pointer = p;
	
	while(p!=NULL && p->next != NULL){
		p=p->next->next;
		prev=slow_pointer;
		slow_pointer = slow_pointer -> next;
	}
	prev->next=slow_pointer->next;
	delete(slow_pointer);
}

int main(){
	int A[]={1,2,3,4,5,4,3,2,1};
	int n=sizeof(A)/sizeof(A[0]);
	create(A,n);
	print(first);
	cout<<endl;
	deletingMiddle(first);
	print(first);
}
