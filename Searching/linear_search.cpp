#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number of elements in array"<<endl;
    cin>>n;

    int arr[n];
    
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int x,ix=-1;
    cout<<"Enter the element you want to search"<<endl;
    cin>>x;

    for(int i=0;i<n;i++){
        if(x==arr[i]){
            ix = i;
            break;
        }
    }
    if(ix != -1){
        cout<<"element found at location "<<ix<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<n-1;j++){
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

}
