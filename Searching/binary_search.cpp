#include <iostream>
using namespace std;

 int binary_search(int arr[],int x,int l,int r);
int main() {
    int n;
    cout<<"Enter the number of elements in array"<<endl;
    cin>>n;

    int arr[n];
    
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
cout<<"Array elements are "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int x;
    cout<<"\nEnter element you want to search"<<endl;
    cin>>x;

cout<<"Index of element "<<binary_search(arr,x,0,n);
}

 int binary_search(int arr[],int x,int l,int r){

     if(r>=l){
     int mid = (l+r-1)/2;
     if(arr[mid]==x){
         return mid;
     }
     else{
         if(x>mid){
             return binary_search(arr,x,mid+1,r);
         }
             return binary_search(arr,x,l,mid-1);
    }
     }
return -1;
 }