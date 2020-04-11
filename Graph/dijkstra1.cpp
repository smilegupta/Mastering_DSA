#include<iostream>
#include<list>
using namespace std;

void addedge(list<pair<int, int> > *al, int u, int v, int w){
  al[u].push_back(make_pair(v, w));
}

int min_distance(int dist[], bool visited[]){
  int Min = INT_MAX, index = 0;
  for(int i = 0; i < 5; i++)
    if(dist[i] <= Min && visited[i] == false){
      Min = dist[i];
      index = i;
    }
  return index;
}

void dijkstra(list<pair<int, int> > *al, int s){
  int dist[5];
  bool visited[5] = {};
  for(int i = 0; i < 5; i++)
    dist[i] = INT_MAX;
  dist[s] = 0;
  for(int i = 0; i < 4; i++){
    int u = min_distance(dist, visited);
    visited[u] = true;
    for(list<pair<int, int> > :: iterator it = al[u].begin(); it != al[u].end(); it++)
      if(visited[it->first] == false && dist[u] != INT_MAX && dist[it->first] > dist[u] + it->second)
        dist[it->first] = dist[u] + it->second;
  }
  for(int i = 0; i < 5; i++)
    cout<<"0 --> "<<i<<" ---> "<<dist[i]<<endl;
}

int main(){
  list<pair<int, int> > *al = new list<pair<int, int> >[5];
  addedge(al, 0, 1, 2);
  addedge(al, 0, 2, 4);
  addedge(al, 1, 2, 1);
  addedge(al, 1, 3, 4);
  addedge(al, 1, 4, 5);
  addedge(al, 2, 1, 5);
  addedge(al, 2, 3, 2);
  addedge(al, 2, 4, 3);
  addedge(al, 3, 4, 1);
  dijkstra(al, 0);
}