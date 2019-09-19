#include<bits/stdc++.h>
using namespace std;
int fun(int m,int n)
{
	if(n==0)
	return 1;
	else
	return fun(m,n-1)*m;
}
int main()
{int a=fun(2,9);
cout<<a;
}
