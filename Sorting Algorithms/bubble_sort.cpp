#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
void bubble_sort(vector<ll>&v, ll n){
  for(ll i=0;i<n-1;i++){
    ll is_swap=0;
    for(ll j=0;j<n-1-i;j++){
      if(v[j]>v[j+1]){
        swap(v[j],v[j+1]);
        is_swap=1;
      }
    }
    if(!is_swap) break;
  }
}
int main(){
fastio();
ll n;
cin>>n;
vector<ll>v(n);
for(ll i=0;i<n;i++){
  cin>>v[i];
}
bubble_sort(v,n);
for(auto x:v){
  cout<<x<<" ";
}
cout<<endl;
return 0;
}