#include<bits/stdc++.h>
using namespace std;
#define int long long


// #include "stdIO.cpp"
int32_t main(){
	// stdIO();
	string input;cin>>input;
	int ans=1;
	char temp = input[0];
	int localCount=1;
	for(int i=1;i<input.size();i++){
		if(input[i]==temp){
			localCount++;
		}else{
			temp = input[i];
			localCount=1;
		}
		ans=max(ans,localCount);
	}
	cout<<ans;

return 0;
}