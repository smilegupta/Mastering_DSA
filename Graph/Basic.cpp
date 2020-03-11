

#include<bits/stdc++.h>
using namespace std;
void addedge(int G[4][4], int u, int v)
{
	G[u][v]=G[v][u]=1;
}
void dfs(int G[4][4], int s, bool visited[]){
	visited[s]=true;
	cout<<s<<" ";
	for(int i=0; i<4; i++)
		if(G[s][i] && !visited[i])
			dfs(G,i, visited);
}


int main()
{
	int G[4][4] = {};
	addedge(G,0, 1);
	addedge(G,0, 2);
	addedge(G,1, 2);
	addedge(G,1, 3);
	bool visited[4]={};
	dfs(G,0, visited);
}
