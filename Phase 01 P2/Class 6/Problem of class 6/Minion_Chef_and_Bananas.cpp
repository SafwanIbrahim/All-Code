#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 1e5+9;
int n,h,arr[N];

bool ok(int x) {
    ll cnt = 0;
    for (int i = 1; i <= n; i++) {
        cnt += (arr[i]+x-1)/x;
    }
    return cnt <= h;
} 

void solve() 
{
    cin >> n >> h;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    int lo = 1, hi = 1e9, ans = 1;
    while(lo <= hi) {
        int mid = (hi+lo)/2;
        if (ok(mid)) {
            ans = mid;
            hi = mid-1;
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