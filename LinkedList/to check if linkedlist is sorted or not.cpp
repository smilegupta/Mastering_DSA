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
 int is_sorted(struct Node *p)
{   int x=INT_MIN;
    int count=0;
	while(p!=NULL)
	{  if(p->data < x)
	    return 0;        
		x=p->data;        
		p=p->next;    
	}    
	return 1;    
	
}
int main()
{
	int A[]={1,2,3,4,5};
	int n=sizeof(A)/sizeof(A[0]);
	create(A, n);
	int flag=is_sorted(first);
	if(flag==1)
	cout<<"Linkedlist is sorted";
	else cout<<"LinkedList is not sorted ";
}
