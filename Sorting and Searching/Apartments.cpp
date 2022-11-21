#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// #include "stdIO.cpp"
int32_t main(){
	// stdIO();
	int n,m,k;
	cin>>n>>m>>k;
	int required[n],rooms[m];
	for(int i=0;i<n;i++)
		cin>>required[i];
	for(int i=0;i<m;i++)
		cin>>rooms[i];	
	sort(required,required+n);
	sort(rooms,rooms+m);
	int ans=0;
	int i=0;
	int j=0;
	while(i<n && j<m){
		int need = required[i];
		if(abs(need - rooms[j])<=k){
			ans++;
			i++;j++;
		}
		else if(need - rooms[j] > k){
			j++;
		}else if(rooms[j] - need > k){
			i++;
		}
	}
	cout<<ans<<endl;
return 0;
}