#include<bits/stdc++.h>
using namespace std;
int fun(int n)
{
	if(n==0)
	return 0;
	else
	return fun(n-1)+n;
}
int main()
{int a=fun(5);
cout<<a;
}
