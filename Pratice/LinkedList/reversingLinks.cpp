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
void reversingLinks(struct Node *p)
{ 
    struct Node *q, *r;
    q=NULL;
    r = NULL;
    while(p!=NULL){
    	r=q;
    	q=p;
    	p=p->next;
    	q->next = r;
	}
	first = q;
}

void print(struct Node *p){
	while(p!=NULL){
		cout<<p->data<<" ";
		p=p->next;
	}
		
}

int main()
{
	int A[]={3,5,7,10,15};
	int n=sizeof(A)/sizeof(A[0]);
	create(A,n);
	print(first);
	cout<<endl;
	reversingLinks(first);
	print(first);
	
}
