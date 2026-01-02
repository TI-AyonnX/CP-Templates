#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
ll partition(vector<ll>&v,ll l,ll h){
    ll pivot=v[l];
    ll i=l,j=h;
    while(i<j){
        while(v[i]<=pivot && i<h){
            i++;
        }
        while(v[j]>pivot && j>l){
            j--;
        }
        if(i<j) swap(v[i],v[j]);
    }
    swap(v[j],v[l]);
    return j;
}
void quick_sort(vector<ll>&v,ll l,ll h){
    if(l<h){
        ll pivot=partition(v,l,h);
        quick_sort(v,l,pivot-1);
        quick_sort(v,pivot+1,h);
    }
}
int main(){
ll n;
cout<<"Size of the vector: ";
cin>>n;
vector<ll>v(n);
cout<<"Elements of the vector: ";
for(ll i=0;i<n;i++){
    cin>>v[i];
}
quick_sort(v,0,n-1);
for(auto x:v){
    cout<<x<<" ";
}
cout<<endl;
return 0;
}