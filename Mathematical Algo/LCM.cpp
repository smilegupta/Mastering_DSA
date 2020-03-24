//LCM of two numbers is the smallest number which can be divided by both numbers
// a*b=LCM(a,b) * GCD(a,b)
//C++ program for LCM
#include<bits/stdc++.h>
using namespace std;
int gcd(int number1,int number2)
{
	if(number2==0)
	return number1;
	return gcd(number2,number1%number2);
}
int LCM(int number1,int number2)
{
	return (number1*number2)/gcd(number1,number2);
}

//Driver Code
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(); cout.tie(NULL);
	int number1,number2;
	cout<<"Enter the both number's:"<<endl;
	cin>>number1>>number2;
	cout<<LCM(number1,number2)<<endl;
	return 0;
}
