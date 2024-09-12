#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 1e5+9;
int n,k,arr[N];

bool ok(ll mid) {
    int cnt = 0;
    ll sum = 0;
    for (int i = 1; i <= n; i++) {
        if (arr[i] > mid) {
            return false;
        }
        if (sum + arr[i] <= mid) {
            sum += arr[i];
        }
        else {
            sum = arr[i];
            cnt++;
        }
    }
    cnt++;
    return cnt <= k;
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    ll lo = 1, hi = 1e14+5, ans = 1e14;
    while(lo <= hi) {
        ll mid = (hi+lo)/2;
        if (ok(mid)) {
            ans = mid;
            hi = mid-1;
        }
        else {
            lo = mid+1;
        }
    }

    cout << ans << endl;

    return 0;
} 