 #include< iostream>
 #include< conio.h>
 using namespace std;
int main()
{

  int n,i,loc,j,temp,a[20];

  cout<<"Enter total elements: ";
  cin>>n;

  cout<<"Enter the elements: ";
  for(i=0;i< n;i++)
      cin>>a[i];

  for(i=0;i< n-1;i++)//represent n-1 passes
  { loc=i;//intialize loc
  /*finding location of smallest element of unsorted subarray*/
      for(j=i+1;j< n;j++)
      {
           if(a[j]< a[loc])//if smallest element found
            loc=j;//update loc
            }
               temp=a[i];
              a[i]=a[loc];
              a[loc]=temp;
           }
      cout<<"After sorting is: ";
  for(i=0;i< n;i++)
      cout<< a[i]<< endl;
          getch();
}