#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

bool func(int a, int b){
	if(a<b){
		swap(a,b);
	}
	if(a-b > b) return false;
	else{
		a=a%3;
		b=b%3;
		if((a==2 && b==1) || (a==1 && b==2) || (a==0 && b==0)){
				return true;
		}else{
				return false;
		}
	}
} 
// #include "stdIO.cpp"
int32_t main(){
	// stdIO();
	int n;cin>>n;
	while(n--){
		int a,b;
		cin>>a>>b;
		if(func(a,b)){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}	

return 0;
}