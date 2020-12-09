#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[] = {11,13,21,3};
	int size = sizeof(arr)/sizeof(arr[0]);
	for(int i=0; i<size; i++){
		int next = -1;
		for(int j=i+1; j<size; j++){
			if(arr[i]<arr[j])
			{
				next = arr[j];
				break;
			}
		}
		cout << arr[i] << " -- " << next << endl; 
	}
}
