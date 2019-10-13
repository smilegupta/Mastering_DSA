 #include< iostream >
 #include< conio.h >
 using namespace std;
int main(){

  int i,j,s,temp,a[20];

  cout<<"Enter total elements: ";
  cin>>s;

  cout<<"Enter the elements: ";
  for(i=0;i< s;i++)
      cin>>a[i];

  for(i=1;i< s;i++){
      temp=a[i];//extracting element to be placed at proper location 
      j=i-1;//intialize location to place the target
//search the location where target is to be inserted//
      while((temp< a[j])&&(j>=0))
      {
      a[j+1]=a[j];//shift element(s) right to make room for insertion
          j=j-1;//move left in sorted subarray
      }

     a[j+1]=temp;//location found, insert target into array
  }

  cout<<"After sorting: ";
  for(i=0;i< s;i++)
      cout<< a[i]<< endl;
         getch();
}