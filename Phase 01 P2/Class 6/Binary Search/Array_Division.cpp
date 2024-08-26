#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 2e5 +7;
int n,k,arr[N];

bool p(ll x) {

    for (int i = 0; i < n; i++) {
        if (arr[i] > x) {
            return false;
        }
    }
    int op = 1;
    ll sum = arr[0];
    for (int i = 1; i < n; i++) {
        if (sum + arr[i] <= x) {
            sum += arr[i];
        }
        else {
            sum = arr[i];
            op++;
        }
    }
    return op <= k;
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ll lo = 0, hi = 2e14;
    ll ans = 0;
    while(lo <= hi) {
        ll mid = (hi+lo) / 2;
        if (p(mid)) {
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