#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
int a,b,n;

bool p(ll x) {
    if (x/a >= n && x/b > 0) return true;
    if (x/b >= n && x/a > 0) return true;
    if ((x/a) * (x/b) >= n) return true;
    return false;
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    cin >> a >> b >> n;
    ll ans;
    ll lo = 1, hi = 1e14;
    while(lo <= hi) {
        ll mid = lo + (hi-lo) / 2;
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