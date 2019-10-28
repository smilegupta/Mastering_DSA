#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
	
}*first=NULL;

void create(int A[], int n){
	int i;
	struct Node *t,*last;
	first=new Node;
	first->data=A[0];
	first->next=NULL;
	last=first;
	
	for(i=1;i<n;i++)
	{
		t= new Node;
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

int main()
{
	int A[]={3,5,7,10,15};
	int n=sizeof(A)/sizeof(A[0]);
	create(A,n);
	display(first);
	
	
}
