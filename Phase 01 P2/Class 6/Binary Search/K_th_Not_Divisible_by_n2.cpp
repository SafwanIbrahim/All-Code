#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int n,k;

bool p(int mid) {
    return mid - mid/n >= k;
}

void solve()
{
    cin >> n >> k;
    int lo = 1, hi = 2e9;
    int ans = 1;

    while(lo <= hi) {
        int mid = lo + (hi-lo) / 2;
        if (p(mid)) {
            hi = mid-1;
            ans = mid;
        }
        else {
            lo = mid+1;
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