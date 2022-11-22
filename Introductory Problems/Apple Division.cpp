#include<bits/stdc++.h>
using namespace std;
#define int long long
 
 
//#include "stdIO.cpp"
int32_t main(){
	//stdIO();
	int n;
	cin>>n;
	int input[n];
	int sum=0;
	for (int i = 0; i < n; i++)
	{
		cin>>input[i];
		sum+=input[i];
	}
	//cout<<sum<<endl;
	int ans=INT_MAX;
	for(int i=0;i<=((1<<n)-1);i++){
		int c=0;
		for(int j=0;j<n;j++){
			if(i&(1<<j)){
				c+=input[j];
			}
		}
		ans=min(ans,abs((sum-c)-c));
	}cout<<ans<<endl;
 
 
return 0;
}