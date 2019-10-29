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

void Delete(struct Node *p,int index) 
{struct Node *q=NULL;
    int i;        
    if(index==1)    
	{q=first;
     first=first->next;
	 free(q);
	 }    
	 else {        
	 for(i=0;i<index-1;i++)        
	 {            
	 q=p;            
	 p=p->next;        
	 }        
	 q->next=p->next;              
	 free(p); 
    }        
}



int main()
{
	int A[]={3,7,9,15,20};
	int n=sizeof(A)/sizeof(A[0]);
	create(A, n);
	Delete(first,5);
	display(first);
}

