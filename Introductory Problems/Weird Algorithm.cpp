#include<bits/stdc++.h>
using namespace std;
#define int long long


void func(int n){
	cout<<n<< " ";
	if(n==1){
		return;
	}else{
		if(n%2==0){
			func(n/2);
		}else{
			func((n*3)+1);
		}
	}
}

// #include "stdIO.cpp"
int32_t main(){
	// stdIO();
	int n;cin>>n;

	func(n);	

return 0;
}