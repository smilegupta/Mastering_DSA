#include<bits/stdc++.h>
using namespace std;
vector <int> insert_last(vector <int> s, int n) 
{
	s.push_back(n);
	return s;
}

vector <int> delete_last(vector <int> s) 
{
	s.pop_back();
	return s;
}

vector <int> insert_beg(vector <int> s, int n) 
{
	s.insert(s.begin(),n); 
	return s;
}

vector <int> delete_beg(vector <int> s)
{
	s.erase(s.begin()); 
	return s;
}

void print_mid(vector <int> s) 
{
	int n;
	n=s.size();
	if(n%2!=0)
	cout<<s[n/2];
	else
	cout<<s[n/2-1]; //for printing 1st mid use s[n/2] for 2nd mid
}

vector <int> delete_mid(vector <int> s)  
{
     int n=s.size();
     int a;
     a=n/2;
     if(n%2!=0)
	 s.erase(s.begin()+a);
	 else
	 s.erase(s.begin()+a-1); //for deleting 1stt mid, to delete second mid use s.begin+a
	 return s;
}
vector <int> insert_mid(vector <int> s, int m)
{
	int n=s.size();
    int a;
    a=n/2;
    if(n%2!=0)
	s.insert(s.begin()+a,m); 
	else
	s.insert(s.begin()+a-1,m); 
	return s;
}
void print_vector(vector <int> s)
{
	int n;
	n=s.size();
	for(int i=0; i<n; i++)
	cout<<s[i]<<" ";
}
int main()
{
	vector<int> s;
	s=insert_last(s,10);
	s=insert_last(s,15);
	s=insert_last(s,20);
	s=insert_beg(s,5);
	print_vector(s);
	cout<<endl;
	int size;
	size=s.size();
	//sort(s.begin(), s.end());
	sort(s.begin(), s.end(),greater<int>());
	
	
}

