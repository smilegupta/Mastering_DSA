#include <bits/stdc++.h> 
using namespace std; 

struct Heap { 
    vector<int> v; 
    int n; 
  
    Heap(int i = 0) 
        : n(i) 
    { 
        v = vector<int>(n); 
    } 
}; 
  

void swap(int& a, int& b) 
{ 
    int temp = a; 
    a = b; 
    b = temp; 
} 

inline int parent(int i) 
{ 
    return (i - 1) / 2; 
} 

inline int left(int i) 
{ 
    return 2 * i + 1; 
} 
 
inline int right(int i) 
{ 
    return 2 * i + 2; 
} 

void heapify(Heap& h, int i) 
{ 
    int l = left(i), r = right(i), m = i; 
    if (l < h.n && h.v[i] < h.v[l]) 
        m = l; 
    if (r < h.n && h.v[m] < h.v[r]) 
        m = r; 
    if (m != i) { 
        swap(h.v[m], h.v[i]); 
        heapify(h, m); 
    } 
} 
  

int extractMax(Heap& h) 
{ 
    if (!h.n) 
        return -1; 
    int m = h.v[0]; 
    h.v[0] = h.v[h.n-- - 1]; 
    heapify(h, 0); 
    return m; 
} 
  
int kThGreatest(Heap &h, int k) 
{ 
    for (int i = 1; i < k; ++i) 
        extractMax(h); 
    return extractMax(h); 
} 
  

int main() 
{ 
    Heap h(7); 
    h.v = vector<int>{ 20, 15, 18, 8, 10, 5, 17 }; 
    int k = 4; 
  
    cout << kThGreatest(h, k); 
    return 0; 
} 
