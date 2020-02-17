#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
};
Node *head=NULL;
void insert_node();
void pop_node();
void print_nodes();

void insert_node(){

cout<<"Enter value to insert"<<endl;
Node *temp = new Node();
cin>>temp->data;
temp->next = NULL;

if(head==NULL){
    head = temp;
}
else{
    temp->next = head;
    head = temp; 
}

}

void print_nodes(){

if(head == NULL){
        cout<<"NO Value in the stack"<<endl;
    }
else{
    cout<<"All Values in the stack are"<<endl;
    Node *newx = head;

    while(newx!=NULL){
        cout<<newx->data<<endl;
        newx = newx->next;
        }
    }
}

void pop_node(){
    if(head == NULL){
        cout<<"NO Node to pop"<<endl;
    }
    else{
    cout<<"Node Popped with value "<<head->data<<endl;
    Node *del = head;
    head = head->next;
    free(del); 
}
}


int top=-1;

int main(){

int n=0;

while(n!=4){
    cout<<"Enter 1 to insert value in stack"<<endl;
    cout<<"Enter 2 to delete value from stack"<<endl;
    cout<<"Enter 3 to print all values in stack"<<endl;
    cout<<"Enter 4 to exit"<<endl;

    cin>>n;

    switch (n)
    {
    case 1:
        insert_node();
        break;

    case 2:
        pop_node();
        break;
    case 3:
        print_nodes();
        break;

    default:
        break;
    } 

}

}