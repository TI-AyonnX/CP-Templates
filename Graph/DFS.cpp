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
  for(auto x:adj[node]){                 // Recursion
    if(!visited[x]){
      DFS(x);
    }
  }
}
/*
void DFS(ll starting_node){
  stack<ll>st;
  st.push(starting_node);
  visited[starting_node]=true;
  while(!st.empty()){
    ll node=st.top();
    st.pop();                              // Iterative approach
    cout<<node<<" ";
    for(auto x:adj[node]){
      if(!visited[x]){
        visited[x]=true;
        st.push(x);
      }
    }
  }
  cout<<endl;
}
*/
int main(){
   fastio();
   ll n,m,u,v,starting_node;
      cin>>n>>m;
      adj.resize(n+1);
      visited.resize(n+1,false);
      for(ll i=1;i<=m;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
      }
     cin>>starting_node;
     DFS(starting_node);
     cout<<endl;
  return 0;
}
