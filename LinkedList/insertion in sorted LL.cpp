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

void insert(struct Node *p, int val )
{   
  struct Node *t, *q=NULL;
  t=new Node;
  t->data=val;
  t->next=NULL;
  if(first==NULL)
    first=t;
  else 
  { while(p && p->data<val)
    { q=p; 
	p=p->next;
	}        
	if(p==first) 
	{ t->next=first;
	  first=t;
	}        
	else
	{t->next=q->next;
	q->next=t;        
	}     
}
 }
int main()
{
	int A[]={3,7,9,15,20};
	int n=sizeof(A)/sizeof(A[0]);
	create(A, n);
	insert(first,18);
	insert(first,10);
	insert(first,2);
	display(first);
}

