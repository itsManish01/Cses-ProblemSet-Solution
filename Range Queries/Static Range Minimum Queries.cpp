#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

#include "stdIO.cpp"
int32_t main(){
	stdIO();
		int n,k;
		cin>>n>>k;
		vector<int> v;
		int minNum=INT_MAX;
		for(int i = 0 ; i < n; i++ ){
			int t;cin>>t;
			minNum=min(minNum,t);
			v.push_back(minNum);
			cout<<v[i]<<" ";
		}
		while(k--){
			int a,b;
			cin>>a>>b;
			
		}
		

return 0;
}