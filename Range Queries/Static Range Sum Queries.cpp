#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// #include "stdIO.cpp"
int32_t main(){
	// stdIO();
		int n,k;
		cin>>n>>k;
		vector<int> v;
		int sum = 0;
		for(int i = 0 ; i < n; i++ ){
			int t;cin>>t;
			sum+= t;
			v.push_back(sum);
			// cout<<v[i]<<" ";
		}
		// cout<<endl;
		while(k--){
			int a,b;cin>>a>>b;
			int ans;
			if(a==1){
				ans=v[b-1];
			}else{
				ans=v[b-1] - v[a-2];
			}
			cout<<ans<<endl; 
		}

return 0;
}