#include<bits/stdc++.h>
using namespace std;
bool isSafe(int board[][10], int i, int j,int n ){
	//Checking for column
	for(int row=0; row<i; row++)
	{
		if(board[row][j]==1)
		return false;
	}
	//Left Diagnol
	int x=i;
	int y=j;
	while(x>=0 && y>=0){
		if(board[x][y]==1)
		  return false;
		  
		  x--;
		  y--; 
	}
	//Right Diagnonal
	x=i;
	y=j;
	while(x>=0 && y>=0){
		if(board[x][y]==1)
		  return false;
		  
		  x--;
		  y++; 
	}
	
	return true;  
}
bool solveNQueen(int board[][10], int i, int n)
{
	//Base Case
	if(i==n)
	{
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++){
				if(board[i][j]==1){
					cout<<" Q ";
				}
				else cout<<" _ ";
			} 
			cout<<endl;
		}
		cout<<endl<<endl;
		return false; //We can write here true to get 1 output
		//cout<<endl;
	}
	for(int j=0; j <n; j++)
	{
	 if(isSafe(board,i,j,n)){ 
	 	board[i][j]=1;
	 	
	 	bool nextQueen=solveNQueen(board, i+1, n);
	 	if(nextQueen){
	 		return true;
		 }
		  
		 board[i][j]=0;
		 
	   }
	}
	return false;
	 
}


int main()
{
	int n;
	int board[10][10]={0};
	cin>>n;
	solveNQueen(board,0,n);
	return 0;	
} 
