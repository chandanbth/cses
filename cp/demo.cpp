#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,q;
	cin>>n>>q;
	vector<int> v(n);
	vector<vector<int>> pref(n+1,vector<int>(3,0));
	for(int i=0;i<n;i++)  cin>>v[i];
	for(int i=1;i<=n;i++){
        pref[i][0]=pref[i-1][0];
		pref[i][1]=pref[i-1][1];
		pref[i][2]=pref[i-1][2];
		pref[i][v[i-1]-1]=pref[i-1][v[i-1]-1]+1;
	}
    for(int i=0;i<q;i++){
		int a,b;
		cin>>a>>b;
        cout<<pref[b][0]-pref[a-1][0]<<" "<<pref[b][1]-pref[a-1][1]<<" "<<pref[b][2]-pref[a-1][2]<<"\n";
	}
	return 0;
}