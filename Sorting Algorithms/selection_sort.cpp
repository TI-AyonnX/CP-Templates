#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
void selection_sort(vector<ll>&v,ll n){
 for(ll i=0;i<n-1;i++){
    int min_index=i;
    for(ll j=i+1;j<n;j++){
        if(v[j]<v[min_index]){
            min_index=j;
        }
    }
    swap(v[i],v[min_index]);
 }
}
int main(){
ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
ll n;
cin>>n;
vector<ll>v(n);
for(ll i=0;i<n;i++){
    cin>>v[i];
}
selection_sort(v,n);
for(ll i=0;i<n;i++){
    cout<<v[i]<<" ";
}
cout<<endl;
return 0;
}