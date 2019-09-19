#include<bits/stdc++.h>
using namespace std;
int fun(int n)
{
	if(n==0 || n==1)
	return 1;
	else
	return fun(n-1)*n;
}
int main()
{int a=fun(5);
cout<<a;
}
