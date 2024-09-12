#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,total; cin >> n >> total;
    ll arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ll ans = -1; 
    ll l = 1, r = 1e18 + 89;

    while(l <= r) {
        ll mins = l+(r-l)/2;
        ll sum = 0;

        for (int i = 0; i < n; i++) {
            sum += mins/arr[i];
            if (sum >= total) {
                ans = mins;
                r = mins-1;
                break;
            }
        }
        if (sum < total) {
            l = mins+1;
        }
    }
    cout << ans << endl;
    return 0;
}