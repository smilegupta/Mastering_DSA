// GCD OR HCF of two numbers is the largest number that divides both of them

//C++ program for calculating GCD BY EUCLIDEAN ALGORITHM
#include<bits/stdc++.h>
using namespace std;
//First Method
//GCD of two number does not change if smaller number is subtracted from a bigger number
int Euclidean(int number1,int number2)
{	
   if(number1==0)
   return number2;
   if(number2==0)
   return number1;
   //base case
   if(number1==number2)
   return number1;
   //a is greater
   if(number1>number2)
   {
   	return Euclidean(number1-number2,number2);
   }
   else
   return Euclidean(number1,number2-number1);
}
//Second Method
int Euclidean1(int number1,int number2)
{
	if(number2==0)
	return number1;
	return Euclidean1(number2,number1%number2);
}

//Driver Code
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int number1,number2;
	cout<<"Enter both number's:"<<endl;
	cin>>number1>>number2;
	//First Method
	cout<<Euclidean(number1,number2)<<endl;
	//Second Method
	cout<<Euclidean1(number1,number2)<<endl;
	return 0;
}
