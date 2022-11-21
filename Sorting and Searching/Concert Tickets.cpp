#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// #include "stdIO.cpp"
int32_t main(){
	// stdIO();
	multiset<int, greater<int>> v;
	int n,m;
	cin>>n>>m;
	int ticket;
    while (n--)
    {
        cin >> ticket;
        v.insert(ticket);
    }
    while (m--)
    {	int curr;
        cin >> curr;
        multiset<int>::iterator it = v.lower_bound(curr);
        if (it == v.end())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << *it << endl;
            v.erase(it);
        }
    }

return 0;
}