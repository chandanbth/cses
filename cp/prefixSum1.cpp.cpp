#include<bits/stdc++.h>
using namespace std;
int findIndex(vector<int> &v, int m){
  int l=0,r=v.size()-1,index=v.size();
  while(l<=r){
    int mid=l+(r-l)/2;
    if(v[mid]>=m){
      index=mid;
      r=mid-1;
    }else{
      l=mid+1;
    }
  }
  return index;
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout<<max({2,3,4,5})<<endl;
  return 0;
}