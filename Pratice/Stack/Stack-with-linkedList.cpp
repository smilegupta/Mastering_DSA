// Stack using a LinkedList 
// Stack Operation: Last in and first out

#include<bits/stdc++.h>
using namespace std;
struct Node {
	int data;
	struct Node *next;
}*first=NULL, *last=NULL;


void push(int val){
	
	if(first == NULL){
		first = new Node;
		first -> data = val;
		first -> next = NULL;
		last = first;
	}
	else{
		struct Node *t;
		t= new Node;
		t -> data = val;
		t->next = NULL;
		last -> next = t;
		last = t;
	}
	
}

void printStack(struct Node *p){
	if(p!=NULL){
		
		printStack(p->next);
		cout<<p->data<<" ";
		
	}	
}


void pop(){
	struct Node *p = first;
	while(p->next->next != NULL){
		p=p->next;	
	}
	p->next = NULL;
	last = p;
}


void printingTop(){
	cout<<"Element on top of stack is "<<last->data<<endl;
}
 
int main(){
	push(5);
	push(6);
	push(7);
	push(8);
	push(9);
	printStack(first);
	cout<<endl;
	pop();
	printingTop();
	pop();
	printStack(first);
	
	
}
