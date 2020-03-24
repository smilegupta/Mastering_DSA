//Euler's toient function ?(n) for an input n is count of numbers in {1,2,3,......n} that are relatively prime to n
// i.e., the number whose GCD with n is 1

//C++ program for EULER'S TOTIENT FUNCTION
#include<bits/stdc++.h>
using namespace std;
int gcd(int i,int number)
{
	if(number==0)
	return i;
	return gcd(number,i%number);
}
int fun(int number)
{
	int result=0;
	for(int i=1;i<number;i++)
	{
		if(gcd(i,number)==1)
		{
			result++;
		}
	}
	return result;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int number;
	cout<<"Enter the number:"<<endl;
	cin>>number;
	cout<<fun(number)<<endl;
	return 0;
}
