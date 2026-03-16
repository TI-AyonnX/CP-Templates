#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
vector<vector<ll>>adj;
vector<bool>visited;
void DFS(ll node){
  visited[node]=true;
  cout<<node<<" ";
  for(auto x:adj[node]){
    if(!visited[x]){
      DFS(x);
    }
  }
}
int main(){
   fastio();
   ll n,m,u,v;
      cin>>n>>m;
      adj.resize(n+1);
      visited.resize(n+1,false);
      for(ll i=1;i<=m;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
      }
     for(ll i=1;i<=n;i++){
      if(!visited[i]){
        DFS(i);
      }
     }
     cout<<endl;
  return 0;
}
