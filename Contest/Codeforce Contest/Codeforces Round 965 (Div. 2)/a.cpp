#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    int x,y,k; cin >> x >> y >> k;
    int res_x = k*x;
    int res_y = k*y;

    if (res_x == res_y) {
        int ans_x = 1, ans_y = k-1;
        int sum = ((k-1)* k )/ 2;
        for (int i = 1; i < k; i++) {
            cout << ans_x++ << " " << ans_y-- << endl;
        }
        cout << res_x - sum << " " << res_y - sum << endl;
    }
    else {
        int ans_x = 1 , ans_y = 1;
        int sum = ((k-1)* k )/ 2;
        for (int i = 1; i < k; i++) {
            cout << ans_x++ << " " << ans_y++ << endl;
        }
        cout << res_x - sum << " " << res_y - sum << endl;
    }
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1; cin >> t;
    while(t--) solve();
    return 0;
} 