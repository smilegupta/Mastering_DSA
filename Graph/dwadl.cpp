#include<iostream>
#include<list>
using namespace std;

void addedge(list<pair<int, int> > *al, int u, int v, int w){
  al[u].push_back(make_pair(v, w));
}

void printGraph(list<pair<int, int> > *al){
  for(int i = 0; i < 4; i++)
    for(list<pair<int, int> > :: iterator it = al[i].begin(); it != al[i].end(); it++)
      cout<<i<<" "<<it->first<<" "<<it->second<<endl;
}

int main(){
  list<pair<int, int> > *al = new list<pair<int, int> > [4];
  addedge(al, 0, 1, 4);
  addedge(al, 0, 3, 5);
  addedge(al, 1, 2, 3);
  addedge(al, 1, 3, 2);
  addedge(al, 2, 3, 6);
  printGraph(al);
}