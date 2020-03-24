//SIEVE OF ERATOSTHENES
// Given a number n , print all primes number smaller than or equal to n.
// it is algo given n is smaller number


//C++ program for SIEVE OF ERATOSTHENES
#include<bits/stdc++.h>
using namespace std;
void Sieve(int number)
{
	bool prime[number+1];
	memset(prime, true, sizeof(prime));
	for(int i=2; i*i<=number;i++)
	{
		//if prime[i] is not changed , then it is a prime
		if(prime[i]==true)
		{
			for(int j=i*i; j<=number;j+=i)
			{
				prime[j]=false;
			}
		}
	}
	for(int p=2;p<=number;p++)
	{
		if(prime[p])
		cout<<p<<" ";
	}
	cout<<endl;
}

//Driver Code
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int number;
	cout<<"Enter the number:"<<endl;
	cin>>number;
	Sieve(number);
	return 0;
}
