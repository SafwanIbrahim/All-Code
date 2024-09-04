#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int a,b; cin >> a >> b;
    int ans = 1000;
    for (int i = a; i <= b; i++) {
        ans = min(ans,(i-a)+(b-i));
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