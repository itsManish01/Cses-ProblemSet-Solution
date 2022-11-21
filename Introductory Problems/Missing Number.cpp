#include<bits/stdc++.h>
using namespace std;
#define int long long


// #include "stdIO.cpp"
int32_t main(){
	// stdIO();
	
	int n;cin>>n;
	int sum=(n*(n+1))/2;
	int sum2=0;
	for(int i=1;i<n;i++){
		int t;cin>>t;
		sum2+=t;
	}
	cout<<sum-sum2<<endl;
return 0;
}