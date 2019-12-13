#include<bits/stdc++.h>
using namespace std;
void showStack(stack <int> s)
{
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
}
int main()
{
	stack <int> s;
	s.push(10);
	s.push(12);
	s.push(16);
	s.push(18);
	s.push(20);
	showStack(s);
	s.pop(); 
	cout<<endl;
	showStack(s);
	cout<<s.top();
	
}
