#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int x,y,k; cin >> x >> y >> k;
    int ans;
    int step;
    if (y >= x) {
        step = (y+k-1)/k;
        ans = step*2;
    }
    else {
        step = (x+k-1)/k;
        ans = step*2;
        if ((step-1)*k >= y){
            ans--;
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