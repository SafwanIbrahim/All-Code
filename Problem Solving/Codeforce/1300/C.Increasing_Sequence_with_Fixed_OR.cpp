#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    ll n; cin >> n;
    
    if ((n&(n-1)) == 0) {
        cout << 1 << endl;
        cout << n << endl;
        return;
    }
    vector<int>track;
    vector<ll>ans(1,n);
    for (int i = 0; i < 63; i++) {
        if (((n >> i) & 1)) {
            track.push_back(i);
        }
    }

    int i = 0;
    int go = track.size();
    while(go--) {
        ll number = ans[i];
        number = ((~((ll)1 << track[i])) & number);
        if (i) {
            number = (((ll)1 << track[i-1]) | number);
        }
        ans.push_back(number);
        i++;
    }

    reverse(ans.begin(),ans.end());

    cout << ans.size() << endl;
    for (auto x : ans) {
        cout << x << " ";
    }
    cout << endl;
    return;
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1; cin >> t;
    while(t--) solve();
    return 0;
} 