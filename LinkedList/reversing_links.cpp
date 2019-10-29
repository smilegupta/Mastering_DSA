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
	
	for(int i=1;i<n;i++)
	{
		t=new Node;
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}
void display(struct Node *p)
{
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
}
void rev(struct Node *p)
{
	p=first;
	struct Node *q, *r;
	q=new Node;
	r=new Node;
	q=NULL;
	r=NULL;
	while(p!=NULL){
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}
	first=q;
}

int main()
{
	int A[]={10,12,15,20,35};
	int n=sizeof(A)/sizeof(A[0]);
	create(A, n);
	rev(first);
	display(first);
}
