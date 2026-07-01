#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
vector<vector<ll>>adj;
vector<bool>visited;
stack<ll>st;
void DFS(ll node){
  visited[node]=true;
     for(auto x:adj[node]){
      if(!visited[x]){
        DFS(x);
      }
     }
    st.push(node);
}
int main(){
  ll n,m,u,v;
  cin>>n>>m;
  adj.resize(n+1);
  visited.resize(n+1,false);
  while(m--){
    cin>>u>>v;
    adj[u].push_back(v);
  }
  for(ll i=1;i<=n;i++){
    if(!visited[i]){
      DFS(i);
    }
  }
  while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
  }
  cout<<endl;
 return 0;
}
