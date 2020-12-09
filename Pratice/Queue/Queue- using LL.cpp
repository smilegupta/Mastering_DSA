// Queue using a LinkedList
// Things covered in this - push operation, pop operation, printing the list, printing first and last element

#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	struct Node *next;
}*first = NULL, *last = NULL;

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

void printQueue(struct Node *p){
	while(p!= NULL){
		cout<<p->data<<" ";
		p=p->next;
	}	
}

void printingFirstElem(){
	cout<<"first element in queue "<<first->data<<endl;
}



void printingLastElem(){
	cout<<"last element in queue "<<last->data<<endl;
}

void pop(){
	struct Node *t;
	t=first->next;
	free(first);
	first= t;
}

int main(){
	push(10);
	push(20);
	push(30);
	push(40);
	printQueue(first);
	cout<<endl;
	pop();
	printQueue(first);
	cout<<endl;
	printingFirstElem();
	printingLastElem();
}


