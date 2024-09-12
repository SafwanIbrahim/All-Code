#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 2e5+9;
int n,k,arr[N];

bool ok(int x) {
    ll cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (arr[i] < x) {
            cnt += x-arr[i];
        }
    }
    return cnt <= k;
}

void solve()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    int lo = 1, hi = 2e9, ans = 0;
    while(lo <= hi) {
        int mid = lo+(hi-lo)/2;
        if (ok(mid)) {
            ans = mid;
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