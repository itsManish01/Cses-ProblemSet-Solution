#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'


vector<string> helper(int n){
	if(n==1){
		return {"0" , "1"};
	}else{
		vector<string> smallOutput = helper(n-1);
		vector<string> ans;
		for(int i=0;i<smallOutput.size();i++){
			string s = smallOutput[i];
			ans.push_back("0"+s);
		}
		for(int i=smallOutput.size()-1;i>=0;i--){
			string s = smallOutput[i];
			ans.push_back("1"+s);
		}
		return ans;
	}
}


// #include "stdIO.cpp"
int32_t main(){
	// stdIO();
	int n;cin>>n;
	vector<string> output = helper(n);
	for (int i = 0; i < output.size(); ++i)
	{
		cout<<output[i]<<endl;
	}
return 0;
}