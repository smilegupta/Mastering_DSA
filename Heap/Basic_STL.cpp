#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={10,20,30,40,50};
    make_heap(v.begin(),v.end()); //To make heap - by default it will make a max heap
    v.push_back(60); //Adding element to heap
    push_heap(v.begin(), v.end());  //Saving the added element to heap
    cout<<v.front(); //printing the first element
    pop_heap(v.begin(), v.end()); 
    v.pop_back(); //deleting the top element
    cout<<endl<<v.front()<<endl;
    cout << "The heap elements are : "; 
    for (int &x : v)  //printing the heap
       cout << x << " "; 
    cout << endl; 
    
    sort_heap(v.begin(), v.end()); //making heap to min heap
    cout << "The heap sorted elements are : "; 
    for (int &x : v)  
       cout << x << " "; 
    cout << endl; 
    cout<<v.front();
      
}
