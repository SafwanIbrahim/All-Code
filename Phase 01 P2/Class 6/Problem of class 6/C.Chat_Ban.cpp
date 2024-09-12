#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int k;
ll x;

ll sum(int n) {
    return 1LL*n*(n+1)/2;
}

ll total(int n) {
    return 1LL*n*(2*(k-1)-(n-1))/2;
}

bool ok(int mid) {
    if (sum(min(k,mid)) >= x) {
        return false;
    }
    if (mid > k) {
        if (total(mid-k) >= x-sum(k)) {
            return false;
        }
    }
    return true;
}

void solve()
{
    cin >> k >> x;

    int lo = 0, hi = 2*k-2, ans = 0;
    while(lo <= hi) {
        int mid = lo +(hi-lo)/2;
        if (ok(mid)) {
            ans = mid+1;
            lo = mid+1;
        }
        else {
            hi = mid-1;
        }
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