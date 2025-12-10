#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int binary_search(vector<ll>v,int target){
  ll left=0,right=v.size()-1,mid,ans=-1;
   while(left<=right){
    mid=(left+right)/2;
    if(v[mid]==target){
      ans=mid;
      left=left+1;
    }
    else if(v[mid]<target){
      left=mid+1;
    }
    else right=mid-1;
   }
   if(ans>=0) return ans+1;
   else {
    if(left>right && right<0) return mid;
    else return mid+1;
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
  cout<<"Upper_bound is: "<<binary_search(v,target)<<endl;
return 0;
}