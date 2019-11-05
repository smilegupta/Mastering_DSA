#include <bits/stdc++.h> 
  
// function to print the divisors 
void printDivisors(int n) 
{ 
    for (int i=1;i<=n;i++) 
        if (n%i==0) 
            printf("%d ",i); 
} 
  
/* Driver program to test above function */
int main() 
{ 
    printf("The divisors of 100 are: \n"); 
    printDivisors(100); 
    return 0; 
} 
