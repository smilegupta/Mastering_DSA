#include<bits/stdc++.h>
using namespace std;
void printTop(vector <int> v)
{
	int size=v.size();
	cout<<v[size-1];
}
vector <int> push_stack(vector <int> v, int n){
	v.push_back(n);
	return v;
}
vector <int> pop_stack(vector <int> v)
{
	v.pop_back();
	return v;
}
void printing_stack(vector <int> v)
{
	for(int i=v.size()-1;i>=0; i--)
	{
		cout<<v[i]<<" ";
	}
}
int main()
{
	vector <int> v;
	v=push_stack(v,10);
	v=push_stack(v,20);
	v=push_stack(v,30);
	v=push_stack(v,40);
	//printTop(v);
	v=pop_stack(v);
	//cout<<endl;
	//printTop(v);
	//cout<<endl;
	if(v.size()!=0)
	{
		cout<<"Stack is not empty"<<endl;
		printing_stack(v); 
	}
	else cout<<"Stack is empty";
	
}
