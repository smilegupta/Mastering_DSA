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
void count(struct Node *P)
{ 
    int count=0;
	while(P!=NULL)
	{ 
	count++;
	P=P->next;
	}
	
	cout<<count;
	
}
int main()
{
	int A[]={3,5,7,10,15};
	int n=sizeof(A)/sizeof(A[0]);
	create(A,n);
	count(first);
	
}
