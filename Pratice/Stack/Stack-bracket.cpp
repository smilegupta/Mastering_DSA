#include<bits/stdc++.h>
using namespace std;
int areParanthesisBalanced(string expr){
	stack<char> s;
	char x;
	for(int i = 0;  i<expr.length(); i++){
		if(expr[i] == '(' || expr[i] == '{' || expr[i] == '['){
			s.push(expr[i]);
			continue;
		}
		if (s.empty()){
			return false;
		}
		switch(expr[i]){
			case ')': 
			x=s.top();
			s.pop();
			if(x=='{' || x=='['){
				return 0;
			}
			break;
			case ']': 
			x=s.top();
			s.pop();
			if(x=='{' || x=='('){
				return 0;
			}
			break;
			case '}': 
			x=s.top();
			s.pop();
			if(x=='[' || x=='('){
				return 0;
			}
			break;
		}
	}
	return (s.empty());	
}

int main(){
	string expr="{()}[]";
	cout<<areParanthesisBalanced(expr);
}
