#include<bits/stdc++.h> 
using namespace std;
int Stack[100], size, top, x, i;

void push(int x){
	if(top>=size)
	cout<<"Stack is full";
	else{
		top++;
		Stack[top] = x;
	}
}

void pop(){
	if(top <= -1){
		cout<<"Stack under Flow";
	} else{
		top--;
	}
}

void display(){
	if(top>=0){
		for(i=top; i>0; i--)
		cout<<Stack[i]<<" ";
	}
	else{
		cout<<"Stack is empty";
	}
}

void displayTop(){
	cout<<Stack[top];
}

int main(){
  size=5;
  push(10);
  push(12);
  display();
  
}
