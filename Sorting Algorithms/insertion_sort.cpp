#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
void insertion_sort(vector<ll>&v){
  for(ll i=1;i<v.size();i++){
    ll key=v[i];
    ll j=i-1;
     while(j>=0 && v[j]>key){
        v[j+1]=v[j];
        j--;
     }
    v[j+1]=key;
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
insertion_sort(v);
for(auto x:v){
    cout<<x<<" ";
}
cout<<endl;
return 0;
}



/*

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
vector<ll>insertion_sort(vector<ll>v){
  for(ll i=1;i<v.size();i++){
    ll key=v[i];
    ll j=i-1;
      while(j>=0 && v[j]>key){
        v[j+1]=v[j];
        j--;
      }
      v[j+1]=key;
  }
  return v;
}
int main(){
fastio();
ll t,n,m,x,y,z,yy;
cin>>n;
vector<ll>v(n),vv;
for(ll i=0;i<n;i++){
  cin>>v[i];
}
vv=insertion_sort(v);
for(auto x:vv){
  cout<<x<<" ";
}
cout<<endl;
return 0;
}


*/