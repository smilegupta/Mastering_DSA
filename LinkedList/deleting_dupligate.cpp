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
void delete_distinct(struct Node *p)
{
      p=first;
	  struct Node *q=new Node;
	  q=first->next;
	  while(q!=NULL)
	  {
	  	if(p->data!=q->data)
	  {
	  	p=q;
	  	q=q->next;
		  }	
		  else
		  {
	     	p->next=q->next;
		  delete q;
		  q=p->next;
		  }
	  }
}

int main()
{
	int A[]={3,5,5,8,8,8};
	int n=sizeof(A)/sizeof(A[0]);
	create(A, n);
	delete_distinct(first);
	display(first);
}
