#include< iostream>
#include< conio.h>
using namespace std;
int a[50],i,n;
void display();
void makeheap(int);
void heapsort();
int main()
{ 
    cout<<"Enter the number of elements to enter : ";
    cin>>n;
    cout<<"enter element:";
    for(i=0;i< n;i++)
    {
        //cout<< i+1<<": ";
        cin>>a[i];
    }
    makeheap(n);
    for(i=0;i< n;i++)
{
  cout<< a[i]<<" ";
} 
    heapsort();
    cout<<"****HEAPSORT****"<< endl;
    display();
    getch();
}
void makeheap(int n)
{
     int val,k,par;
     for(i=1;i< n;i++)
     {
          val=a[i];
         k=i;
         par=(k-1)/2;
         while(k>0&&a[par]< val)
         {
             a[k]=a[par];
             k=par;
             par=(k-1)/2;


             a[k]=val;
         }
         
     
     }
//     for(i=0;i< n;i++)
  //   {
    //        cout<< a[i]<<" ";
     //}
     cout<< endl;
}
  
void heapsort()
{
   int temp;
   for(i=n-1;i>0;i--)
   {
     temp=a[i];
     a[i]=a[0];
     a[0]=temp;
     makeheap(i);
     }
}
void display()
{
for(i=0;i< n;i++)
{
  cout<< a[i]<<" ";
}  
} 