//Given an number n, write an efficient function to print all prime factor of n

//C++ program for FACTORIZATION
#include<bits/stdc++.h>
using namespace std;
void primeFactor(int number)
{
	while(number%2==0)
	{
		number=number/2;
		cout<<"2"<<" ";
	}
	for(int i=3;i<=sqrt(number);i=i+2)
	{
		while(number%i==0)
		{
			cout<<i<<" ";
			number=number/i;
		}
	}
	if(number>2)
	cout<<number<<" ";
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int number;
	cout<<"Enter the Number:"<<endl;
	cin>>number;
	primeFactor(number);
	return 0;
}
