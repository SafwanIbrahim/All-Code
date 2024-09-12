#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 1e4+7;
int n,k,arr[N];

bool ok(ll x) {
    ll dis = 0;
    int cow = 1;
    for (int i = 2; i <= n; i++) {
        dis += arr[i] - arr[i-1];  
        if (dis >= x) {
            cow++;
            dis = 0;
        }
    }
    return cow >= k;
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    ll lo = 1, hi = 1e13+7, ans = 0;
    while(lo <= hi) {
        ll mid = (hi+lo) / 2;
        if (ok(mid)) {
            ans = mid;
            lo = mid+1;
        }
        else {
            hi = mid-1;
        }
    }

    cout << ans << endl;

    return 0;
} 