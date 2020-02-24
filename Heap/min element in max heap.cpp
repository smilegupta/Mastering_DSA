// C++ implementation of above approach 
#include <bits/stdc++.h> 
using namespace std; 

int findMinimumElement(int heap[], int n) 
{ 
    int minimumElement = heap[0]; 
  
    for (int i = 1; i < n; ++i) 
        minimumElement = min(minimumElement, heap[i]); 
  
    return minimumElement; 
} 

int main() 
{ 
    // Number of nodes 
    int n = 10; 

    int heap[] = { 20, 18, 10, 12, 9, 9, 3, 5, 6, 8 }; 
  
    cout << findMinimumElement(heap, n); 
  
    return 0; 
}
