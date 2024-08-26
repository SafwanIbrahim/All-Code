#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    ll n; cin >> n;
    int k; cin >> k;
    ll ans = k;
    int div = 0;

    while(ans/n > div) {
        int stored = ans/n;
        ans += ans/n - div;
        div = stored;
    }
    cout << ans << endl;
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1; cin >> t;
    while(t--) solve();
    return 0;
} 