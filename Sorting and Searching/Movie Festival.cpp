#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

#include "stdIO.cpp"
int32_t main(){
	stdIO();
	int n;cin>>n;
	vector<pair<int,int>> v;
	for (int i = 0; i < n; ++i)
	{
		int a,b;cin>>a>>b;
		v.push_back({a,b});
	}
	sort(v.begin(), v.end());
	for(int i=0;i<n;i++){
	 	cout<<v[i].first << " "<<v[i].second<<"\n";
	 }
	int start= v[0].first;
	int ans=0;
	for (int i = 1; i < n; i++ ){
		if ( v[i].second >= start ){
			start = v[i].second;
			ans++;
		}
	}
	cout<<ans+1<<endl;

return 0;
}