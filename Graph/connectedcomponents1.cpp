#include<iostream>
#include<list>
using namespace std;

void addedge(list<int> *al, int u, int v){
  al[u].push_back(v);
  al[v].push_back(u);
}

void dfs(list<int> *al, int s, bool visited[]){
  visited[s] = true;
  for(list<int> :: iterator it = al[s].begin(); it != al[s].end(); it++)
    if(visited[*it] == false)
      dfs(al, *it, visited);
}

int main(){
  list<int> *al = new list<int>[6];
  bool visited[6] = {};
  int cnt = 0;
  addedge(al, 0, 1);
  addedge(al, 0, 2);
  addedge(al, 3, 4);
  for(int i = 0; i < 6; i++)
    if(visited[i] == false){
      dfs(al, i, visited);
      cnt++;
    }
  cout<<cnt<<endl;
}