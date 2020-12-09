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


int isPalindrome(struct Node *p){
	stack <int> s;
	struct Node *temp;
	temp=p;
	while(temp!=NULL){
		s.push(temp->data);
		temp=temp->next;
	}
	while(p!=NULL){
		if(s.top() != p->data){
			return 0;
		}
		else{
			s.pop();
			p=p->next;
		}
	}
	return 1;
	
}

int main(){
	int A[]={1,2,3,4,5,4,3,2,1};
	int n=sizeof(A)/sizeof(A[0]);
	create(A,n);
	cout<<isPalindrome(first);
}
