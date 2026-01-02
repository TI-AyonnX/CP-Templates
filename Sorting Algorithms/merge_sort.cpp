#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
void merge(vector<ll>&v,ll l,ll mid,ll h){
  ll i=l,j=mid+1;
  vector<ll>temp;
  while(i<=mid && j<=h){
    if(v[i]<=v[j]){
      temp.push_back(v[i]);
      i++;
    }
    else{
      temp.push_back(v[j]);
      j++;
    }
  }
  while(i<=mid){
    temp.push_back(v[i]);
    i++;
  }
  while(j<=h){
    temp.push_back(v[j]);
    j++;
  }
  for(ll i=0;i<temp.size();i++){
    v[l+i]=temp[i];
  }
}
void merge_sort(vector<ll>&v,ll l,ll h){
  if(l<h){
    ll mid=(l+h)/2;
    merge_sort(v,l,mid);
    merge_sort(v,mid+1,h);
    merge(v,l,mid,h);
  }
}
int main(){
//fastio();
ll n;
cout<<"Vector size: ";
cin>>n;
vector<ll>v(n);
cout<<"Elements of the vector:"<<endl;
for(ll i=0;i<n;i++){
  cin>>v[i];
}
merge_sort(v,0,v.size()-1);
for(auto x:v){
  cout<<x<<" ";
}
cout<<endl;
return 0;
}