#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node *next;
}*first=NULL;

void create(int A[], int n){
	int i;
	struct Node *t, *last;
	first = new Node;
	first -> data = A[0];
	last = first;
	
	for(i=1; i<n; i++){
		t = new Node;
		t -> data = A[i];
		t->next = NULL;
		last->next = t;
		last = t;
	}
}

int nthElementFromEnd(struct Node *p,int pos){
	struct Node *temp;
	temp=p;
	int count = 0;
	while(temp!=NULL){
		count = count + 1;
		temp=temp->next;
	}
	int finalPos = count - pos + 1;
	//cout<<finalPos;
	int c = 0;
	while(p!=NULL){
		c = c + 1;
		if(finalPos == c){
			return p->data;
		}
		p=p->next;
	}
	return -1;
}


int main(){
	int A[]={1,2,3,4,5,6,7,8};
	int n = sizeof(A)/sizeof(A[0]);
	create(A,n);
	cout<<nthElementFromEnd(first,1);
	
	
}
