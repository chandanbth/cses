#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    vector<long long int> v(n+1,0);
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        v[i]=v[i-1]+a;
    }
    int res=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if((v[j]-v[i])%7==0){
                res=max(res,(j-i));
            }
        }
    }
    cout<<res<<"\n";
    return 0;
}