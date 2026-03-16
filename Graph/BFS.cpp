#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
vector<vector<ll>>adj;
vector<bool>visited;
void BFS(ll starting_node){
    queue<ll>q;
    q.push(starting_node);
    visited[starting_node]=true;
    while(!q.empty()){
        ll node=q.front();
        q.pop();
        cout<<node<<" ";
        /*
        for(auto x:adj[node]){
            if(!visited[x]){
                visited[x]=true;                         for-each loop
                q.push(x);
            }
        }
        */
       for(ll i=0;i<adj[node].size();i++){
        ll x=adj[node][i];
        if(!visited[x]){                                // normal loop                     
            visited[x]=true;
            q.push(x);
        }
       }
    }
    cout<<endl;
}
int main(){
   fastio();
   ll n,m,u,v,starting_node;
    cin>>n>>m;
    adj.resize(n+1);
    visited.resize(n+1,false);
    for(ll i=0;i<m;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cin>>starting_node;
    BFS(starting_node);
    return 0;
}