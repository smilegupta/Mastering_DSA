#include <bits/stdc++.h> 
using namespace std; 
  

int findMaximumElement(int heap[], int n) 
{ 
    int maximumElement = heap[0]; 
  
    for (int i = 1; i < n; ++i) 
        maximumElement = max(maximumElement, heap[i]); 
  
    return maximumElement; 
} 

int main() 
{ 
    // Number of nodes 
    int n = 10; 

    int heap[] = { 10, 25, 23, 45, 50, 30, 35, 63, 65, 81 }; 
  
    cout << findMaximumElement(heap, n); 
  
    return 0; 
} 
