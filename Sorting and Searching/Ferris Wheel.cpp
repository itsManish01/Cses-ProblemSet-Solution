#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// #include "stdIO.cpp"
int32_t main(){
	// stdIO();
	int n,x;
	cin>>n>>x;
	int weights[n];
	for(int i=0;i<n;i++)
		cin>>weights[i];
	sort(weights,weights+n);
	
	int ans=0;
	int si=0;int ei=n-1;
	while(si<=ei){
		if(si==ei){
			ans++;break;
		}
		if(weights[si] + weights[ei]  <= x){
			si++;ei--;
			ans++;
		}else{
			ei--;
			ans++;
		}
	}cout<<ans<<endl;
return 0;
}