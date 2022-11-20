#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
 
int32_t main() {
    int n;
    cin>>n;
    int mod=pow(10,9)+7;
    if(n==0){
        cout<<"0"<<endl;
        return 0;
    }
    int ans=1;
    while(n--){
        ans=(ans*2)%mod;
    }
    cout<<ans%mod<<endl;
    return 0 ;
}