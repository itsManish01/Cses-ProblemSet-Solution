#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// #include "stdIO.cpp"
int32_t main(){
	// stdIO();
	map<int,int> mapp;
	int n;cin>>n;
	while(n--){
		int a,b;
		cin>>a>>b;
		mapp[a]=1;
		mapp[b]=-1;
	}	
	int ans=0;
	int maxAns=0;
	for(auto i : mapp){
		if(i.second==1){
			ans++;
		}
		else{
			ans--;
		}
		maxAns=max(maxAns,ans);
	}
	cout<<maxAns<<endl;

return 0;
}