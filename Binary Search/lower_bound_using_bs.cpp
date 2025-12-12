#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void lower_bound(vector<ll>v,ll target){
  ll left=0,right=v.size()-1,mid,flag=0;
   while(left<=right){
    mid=(left+right)/2;
    if(v[mid]==target){
      flag=1;
      right=mid-1;
    }
    else if(v[mid]<target){
      left=mid+1;
    }
    else right=mid-1;
   }
   if(flag){
    cout<<"found"<<endl;
    cout<<"lower bound is: "<<left<<endl;
   }
   else{
    cout<<"not found"<<endl;
    cout<<"lower bound is: "<<left<<endl;
   }
  }
int main(){
  ll n,target;
  cout<<"Enter the size of the vector: ";
  cin>>n;
  vector<ll>v(n);
  cout<<"The elements of the vector: ";
  for(ll i=0;i<n;i++){
    cin>>v[i];
  }
  sort(v.begin(),v.end());
  cout<<"Target element: ";
  cin>>target;
  lower_bound(v,target);
return 0;
}