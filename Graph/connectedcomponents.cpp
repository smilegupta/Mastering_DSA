#include<iostream>
using namespace std;

void addedge(int G[6][6], int u, int v){
  G[u][v] = G[v][u] = 1;
}

void dfs(int G[6][6], int s, bool visited[6]){
  visited[s] = true;
  for(int i = 0; i < 6; i++)
    if(G[s][i] && !visited[i])
      dfs(G, i, visited);
}

int main(){
  int G[6][6] = {}, cnt = 0;
  bool visited[6] = {};
  addedge(G, 0, 1);
  addedge(G, 0, 2);
  addedge(G, 3, 4);
  for(int i = 0; i < 6; i++)
    if(!visited[i]){
      dfs(G, i, visited);
      cnt++;
    }
  cout<<cnt<<endl;
}