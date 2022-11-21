#include<bits/stdc++.h>
using namespace std;
#define int long long


// #include "stdIO.cpp"
int32_t main(){
	// stdIO();
	 int n;
    cin>>n;
    int sum=n*(n+1)/2;
    if(sum%2!=0){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES\n";
        if(n%2==0){
            cout<<n/2<<endl;
            for(int i=1;i<n+1;i++){
                if(i==1 || i%4==0 || i%4==1)
                    cout<<i<<" ";
            }
            cout<<endl;
            cout<<n/2<<endl;
            for(int i=1;i<n+1;i++){
                if(i==2 || i==3 || i%4==2 || i%4==3)
                    cout<<i<<" ";
            }
            cout<<endl;
        }else{
            cout<<(n+1)/2<<endl;
            cout<<"1 2 ";
            for(int i=4;i<n+1;i++){
                if(i%4==0 ||i%4==3)
                    cout<<i<<" ";
            }cout<<endl;
            cout<<(n-1)/2<<endl;
            cout<<"3 ";
            for(int i=5;i<n+1;i++){
                if(i%4==1 ||i%4==2)
                    cout<<i<<" ";
            }cout<<endl;
        }
    }
    return 0;
		

return 0;
}