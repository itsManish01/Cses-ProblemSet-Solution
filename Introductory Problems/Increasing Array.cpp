#include<bits/stdc++.h>
using namespace std;
#define int long long


//#include "stdIO.cpp"
int32_t main(){
	//stdIO();
	int n;cin>>n;
	int input[n];
	for(int i=0;i<n;i++)
		cin>>input[i];

	int ans=0;
	for(int i=1;i<n;i++){
		if(input[i] < input[i-1]){
			ans+= input[i-1] - input[i];
			input[i]=input[i-1];
		}
	}
	cout<<ans;

return 0;
}