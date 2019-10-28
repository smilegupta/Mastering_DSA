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
void min(struct Node *p)
{
	int Min=INT_MAX;
	while(p!=NULL)
	{
		if(Min>p->data)
		{
			Min=p->data;
		}
		p=p->next;
	}
	cout<<Min;
}
int main(){
	int A[]={1,2,3,4,5};
	int n=sizeof(A)/sizeof(A[0]);
	create(A,n);
	min(first);
	
}
