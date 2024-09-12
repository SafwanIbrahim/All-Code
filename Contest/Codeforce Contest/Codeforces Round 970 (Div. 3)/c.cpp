#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    map<ll,int>mp;
    ll maxi = 1e10;
    int a = 0;
    int count = 1;
    for (ll i = 0; i <= maxi; i += a) {
        a++;
        mp[i] = count;
        count++;
    }

    int t = 1; cin >> t;
    while(t--) {
        int l,r; cin >> l >> r;
        int dif = r-l;
        auto it = mp.upper_bound(dif);
        it--;
        cout << (*it).second << endl;
    }

    return 0;
} 