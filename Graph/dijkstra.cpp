#include<iostream>
using namespace std;

void addedge(int G[5][5], int u, int v, int w){
  G[u][v] = w;
}

int findMinDist(int dist[], bool visited[]){
  int Min = INT_MAX, index = 0;
  for(int i = 0; i < 5; i++)
    if(visited[i] == false && dist[i] <= Min){
      Min = dist[i];
      index = i;
    }
    return index;
}

void dijkstra(int G[5][5], int s){
  bool visited[5] = {};
  int dist[5];
  for(int i = 0; i < 5; i++)
    dist[i] = INT_MAX;
  dist[s] = 0;
  for(int i = 0; i < 4; i++){
    int u = findMinDist(dist, visited);
    visited[u] = true;
    for(int v = 0; v < 5; v++)
      if(visited[v] == false && G[u][v] && dist[u] != INT_MAX && dist[v] > dist[u] + G[u][v])
        dist[v] = dist[u] + G[u][v];
  }
  for(int i = 0; i < 5; i++)
    cout<<"0 ==> "<<dist[i]<<endl;
}

int main(){
  int G[5][5] = {};
  addedge(G, 0, 1, 2);
  addedge(G, 0, 2, 4);
  addedge(G, 1, 2, 1);
  addedge(G, 1, 3, 4);
  addedge(G, 1, 4, 5);
  addedge(G, 2, 1, 5);
  addedge(G, 2, 3, 2);
  addedge(G, 2, 4, 3);
  addedge(G, 3, 4, 1);
  dijkstra(G, 0);
}