/*
	Dijikstra
*/
#include<bits/stdc++.h>
using namespace std;
const int MAX=1e5+5;
int32_t main(){
    int t;cin>>t;
    while(t--){
        map<pair<int,int>,int>mp;
        vector<int>adj[MAX];
        int v,e;cin>>v>>e;
        int n=v;
        for(auto i=0;i<e;i++){
            int a,b,w;cin>>a>>b>>w;
            if(mp.count({a,b}))
                { 
                auto itr=mp.find({a,b});
                if(itr->second>w){
                     mp[{a,b}]=w;
                    mp[{b,a}]=w;
                }
                continue;
            }
            mp[{a,b}]=w;
            mp[{b,a}]=w;
            adj[a].pb(b);
            adj[b].pb(a);
        }
        int src;
        cin>>src;
        int dist[n+1]; 
        fill(dist+1,dist+n+1,INT_MAX);
        int mark[n+1]={0};
        dist[src]=0;
        set<pair<int,int>>s;
        s.insert({0,src});
        while(!s.empty()){
            pair<int,int> front=*s.begin();
            s.erase(s.begin());
            mark[front.second]=1;
            int node=front.second;
            for(auto p:adj[node]){
                if(mark[p]==0)
                {
                    if(dist[p]>dist[node]+mp[{node,p}]){
                        s.erase({dist[p],node});
                        dist[p]=dist[node]+mp[{node,p}];
                        s.insert({  dist[p] , p});                  
                    }
                }
            }
        }
    for(int i=1;i<=n;i++)
    {
        if(dist[i]==INT_MAX)
        {
            cout<<-1<<" ";
            continue;
        }
        if(src==i)continue;
        cout<<dist[i]<<" ";
    }
        cout<<endl;
    }
}
 


