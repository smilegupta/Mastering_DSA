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

int loopFinder(struct Node *p){
	struct Node *fast_p = p;
	struct Node *slow_p = p;
	
	while(slow_p && fast_p && fast_p->next){
		slow_p = slow_p->next; 
        fast_p = fast_p->next->next; 
        if (slow_p == fast_p) { 
            return 1; 
        } 
	}
	return 0;
}


int main(){
	int A[]={1,2,3,4};
	int n = sizeof(A)/sizeof(A[0]);
	create(A,n);
	//first->next->next->next->next=first;
	cout<<loopFinder(first);
	
}
