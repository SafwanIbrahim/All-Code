#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        if ((n & (n-1)) == 0) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
} 