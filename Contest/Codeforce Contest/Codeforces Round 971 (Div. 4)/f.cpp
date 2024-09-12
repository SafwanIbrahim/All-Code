#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1; cin >> t;
    while(t--) {
        int n,q; cin >> n >> q;
        int arr[n+1];
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }   
        ll ps[n+1];
        ps[0] = 0;
        for (int i = 1; i <= n; i++) {
            ps[i] = arr[i]+ps[i-1];
        }

        while(q--) {
            ll l,r; cin >> l >> r;
            int part = ((r-l)+2)/n-1;
            ll ans = ps[n]*part;
            int lp = (l+n-1)/n, rp = (r+n-1)/n;
            int lgo = n-(l%n), rgo = r%n-1;
            ll rans = -ps[rp-1]+ps[rp+min(n-rp,rgo)];
            // if (rgo > n-rp) {
            //     rans += ps[rgo-n-rp];
            // }
            cout << ans+rans << endl;
        }
    }
    return 0;
} 