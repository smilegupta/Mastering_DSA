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

void middleElementFinder(struct Node *p){
	struct Node *fast_pointer = p;
	struct Node *slow_pointer = p;
	
	if(p!=NULL){
		while(fast_pointer != NULL && fast_pointer -> next != NULL){
			fast_pointer = fast_pointer -> next ->next;
			slow_pointer = slow_pointer ->next;
		}
		cout<<slow_pointer->data;
	}
}


int main(){
	int A[]={1,2,3,4,5,6,7};
	int n = sizeof(A)/sizeof(A[0]);
	create(A,n);
	middleElementFinder(first);
	
}
