#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,a,b; cin >> n >> a >> b;
    int lo = 0, hi = 1e9, ans = 0, extra = min(a,b);
    while(lo <= hi) {
        int mid = lo + (hi-lo) / 2;
        if ((mid/a)+(mid/b) >= n-1) {
            ans = mid + extra;
            hi = mid-1;
        }
        else {
            lo = mid+1;
        }
    }
    cout << ans << endl;
    return 0;
}