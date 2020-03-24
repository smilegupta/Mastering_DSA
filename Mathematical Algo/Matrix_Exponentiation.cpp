//C++ program to find value of f(n) where f(n) is defined as 
// f(n)=f(n-1)+ f(n-2)+ f(n-3), n>=3
//Base cases:
//f(0)=0, f(1)=1, f(2)=1;

//C++ program for MATRIX EXPONENTIATION
#include<bits/stdc++.h>
using namespace std;

//A utility function to multiply two matrices
//arr1[] and arr2[] . multiplication result is stored back in arr1[]
void multiply(int arr1[3][3],int arr2[3][3])
{
	int mul[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			mul[i][j]=0;
			for(int k=0;k<3;k++)
			{
				mul[i][j]+=arr1[i][k]*arr2[k][j];
			}
		}
	}
	//storing the multiplication result in arr1[]
	for(int i=0;i<3;i++)
	for(int j=0;j<3;j++)
	arr1[i][j]=mul[i][j];
}

// function to compute f raise to power number-2
int power(int f[3][3],int number)
{
	int m[3][3]={{1,1,1},{1,0,0},{0,1,0}};
	// multiply with the initial value
	if(number==1)
	return f[0][0]+f[0][1];
	power(f,number/2);
	multiply(f,f);
	if(number%2!=0)
	multiply(f,m);
	
	return f[0][0]+f[0][1];
}
int findNth(int number)
{
	int f[3][3]={{1,1,1},{1,0,0},{0,1,0}};
	//base case
	if(number==0)
	return 0;
	if(number==1||number==2)
	return 1;
	
	return power(f,number-2);
}

//Driver Code
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int number;
	cout<<"Enter the number:"<<endl;
	cin>>number;
	cout<<"Value is: "<<findNth(number)<<endl;
	return 0;
}
