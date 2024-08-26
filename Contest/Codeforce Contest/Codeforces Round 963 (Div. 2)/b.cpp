#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int n; cin >> n;
    multiset<ll>js,bs;
    for (int i = 0; i < n; i++) {
        ll a; cin >> a;
        if (a % 2 == 0) js.insert(a);
        else bs.insert(a);
    }

    ll ans = 0;
    while(!bs.empty() and !js.empty()) {
        ll j_min = *js.begin();
        ll b_max = *bs.rbegin();
        ll suto = min(j_min,b_max);
        if (suto % 2 == 0) {
            js.erase(js.find(suto));
        }
        else bs.erase(bs.find(suto));
        ll sum = j_min + b_max;
        if (sum % 2 == 0) {
            js.insert(sum);
        }
        else bs.insert(sum);
        ans++;
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