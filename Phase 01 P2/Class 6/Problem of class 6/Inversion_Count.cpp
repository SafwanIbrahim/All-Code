#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{   
    int n; cin >> n;
    map<int,int>mp;
    ll cnt = 0;
    for (int i = 1; i <= n; i++) {
        int a; cin >> a;
        auto it = mp.upper_bound(a);
        cnt += i-(*it).second;
        mp[a] = i;
    }
    cout << cnt << endl;
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1; cin >> t;
    while(t--) solve();
    return 0;
} 