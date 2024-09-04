#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int maxi,mini;

ll p(int mid) {
    ll first_part = 1LL*mid*(mid+1)/2 - (1LL*mini*(mini-1)/2);
    ll last_part = 1LL*maxi*(maxi+1)/2 - (1LL*mid*(mid+1)/2);
    return abs(first_part-last_part);
}

void solve()
{
    cin >> maxi >> mini;
    maxi += mini-1;

    ll ans = INT_MAX;
    int lo = mini, hi = maxi;
    while(lo <= hi) {
        int mid = lo+(hi-lo)/2;
        ans = min(ans,p(mid));
        if (p(mid+1) < p(mid-1)) {
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