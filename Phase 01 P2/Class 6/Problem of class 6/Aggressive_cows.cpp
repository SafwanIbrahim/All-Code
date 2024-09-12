#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 1e5+9;
int n,c,arr[N];

bool ok(int x) {
    int cow = 1;
    int dis = 0;
    for (int i = 2; i <= n; i++) {
        dis += arr[i]-arr[i-1];
        if (dis >= x) {
            dis = 0;
            cow++;
        }
    }
    return cow >= c;
}

void solve()
{
    cin >> n >> c;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    sort(arr+1,arr+n+1);

    int lo = 1, hi = 1e9, ans = 1;
    while(lo <= hi) {
        int mid = (hi+lo)/2;
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