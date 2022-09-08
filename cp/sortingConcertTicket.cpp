#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int> price,custmr;
    for(int i=0;i<n;i++){
       int a; cin>>a;
       price.push_back(a);
    }
    for(int i=0;i<m;i++){
        int a; cin>>a;
        custmr.push_back(a);
    }
    sort(price.begin(),price.end());
    for(int i=0;i<m;i++){
        int t=custmr[i];
        int l=0,r=price.size()-1,res=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if( abs(price[mid])<=t){
               if(price[mid]>0)
                res=mid;
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
       if(res!=-1){
        cout<<price[res]<<"\n";
        price[res]=-1*price[res];
       }else{
        cout<<res<<"\n";
       }
    }
    return 0;
}