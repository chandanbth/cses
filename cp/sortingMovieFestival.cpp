#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mini=INT_MAX,maxi=0;
        for(int i=0;i<n;i++){
            int a; cin>>a;
            if(a<mini){
                mini=a;
            }
            if(a>maxi){
                maxi=a;
            }
        }
        cout<<(maxi-mini)<<"\n";
    }
    return 0;
}