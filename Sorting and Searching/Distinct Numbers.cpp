#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// #include "stdIO.cpp"
int32_t main(){
	// stdIO();
	int n;cin>>n;
	map<int,int> mapp;
	for(int i=0;i<n;i++){
		int t;cin>>t;
		mapp[t]++;
	}
	cout<<mapp.size()<<endl;

return 0;
}