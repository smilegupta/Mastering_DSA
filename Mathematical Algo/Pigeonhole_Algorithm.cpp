//PigeonHole is a sorting algorithm that is suitable for sorting lists of element
//where the number of possible key values are approximately the same

//C++ program for PIGEONHOLE ALGORITHM
#include<bits/stdc++.h>
using namespace std;
void pigeonholeSort(int *arr,int total_number)
{
	int minimum=arr[0], maximum=arr[0];
	for(int i=1;i<total_number;i++)
	{
		if(arr[i]<minimum)
		minimum=arr[i];
		if(arr[i]>maximum)
		maximum=arr[i];
	}
	int range = maximum-minimum+1;
	vector<int> holes[range];
	for(int i=0;i<total_number;i++)
	{
		holes[arr[i]-minimum].push_back(arr[i]);
	}
	int index=0;
	for(int i=0;i<range;i++)
	{
		vector<int>::iterator it;
		for(it=holes[i].begin();it!=holes[i].end();++it)
		{
			arr[index++]=*it;
		}
	}
}

// Driver Code
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int total_number;
	cout<<"Enter the total number which are present in the array:"<<endl;
	cin>>total_number;
	int arr[total_number];
	cout<<"Enter the element in the array:"<<endl;
	for(int i=0;i<total_number;i++)  cin>>arr[i];
	pigeonholeSort(arr,total_number);
	cout<<"Sorted Array is:"<<endl;
	for(int i=0;i<total_number;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
