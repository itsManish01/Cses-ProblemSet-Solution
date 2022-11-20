#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'



// #include "stdIO.cpp"
int32_t main(){
	// stdIO();
	int n;
	cin>>n;
	if(n<5){
		cout<<"0"<<endl;
	}	
	else{
		int count=0;
	    int t=5;
	    while(t<=n){
	        count+= n/t;
	        t=t*5;
	    }
		cout<<count<<endl;
	}

return 0;
}