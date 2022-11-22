#include <bits/stdc++.h>
using namespace std;
#define int long long
void func(string s,int si,int ei){
	map<char,int> mapp;
	for(int i=si;i<=ei;i++){
		mapp[s[i]]++;
	}
	string ans="";
	int t=1;
	char middle;
	for(auto i:mapp){
		if( i.second ==1 ){
			if(t==1){
				t--;
				middle=i.first;
			}
			else{
				cout<<"NO SOLUTION\n";
				return ;
			}
		}else if(i.second %2!=0 && i.second > 2){
			if(t==1){
				t--;
				middle=i.first;
				for(int k=0;k<i.second/2;k++){
					ans+=i.first;
				}
			}else{
				cout<<"NO SOLUTION\n";
				return ;
			}
		}
		else{
			for(int j=0;j<i.second/2;j++)
				ans+=i.first;
		}
	}
	if(t==0){
		ans+=middle;
	}cout<<ans;
	if(t==0){
		for (int i = ans.size()-2; i >=0 ; i--)
		{
			cout<<ans[i];
		}
	}else{
		for (int i = ans.size()-1; i >=0 ; i--)
		{
			cout<<ans[i];
		}
	}
	
}
 
//#include "stdIO.cpp"
int32_t main(){
	//stdIO();
	string s;
	cin>>s;
	
	func(s,0,s.size()-1);
 
	return 0;
}