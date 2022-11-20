#include<bits/stdc++.h>
using namespace std;
#define int long long


void funct(int n){
	if(n==1) {
		cout<<"1\n";
		return;
	}
	if(n<=3){
		cout<<"NO SOLUTION\n";
	}else if(n==4){
		cout<<"2 4 1 3\n";
	}
	else{
		int a=n;
		int b= n-1;
		for(int i=a ;i>0 ;i=i-2) cout<<i<<" ";
		for(int i=b ;i>0 ;i=i-2) cout<<i<<" ";
	}
}


// #include "stdIO.cpp"
int32_t main(){
	// stdIO();
	int n;cin>>n;
	funct(n);

return 0;
}