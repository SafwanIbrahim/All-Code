#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    int ca = 0, cb = 0 , cc = 0,cd = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'A') ca++;
        else if (s[i] == 'B') cb++;
        else if (s[i] == 'C') cc++;
        else if (s[i] == 'D') cd++;
    }

    int ans = 0;
    if (ca > n) ans += n;
    else ans += ca;
    if (cb > n) ans += n;
    else ans += cb;
    if (cc > n) ans += n;
    else ans += cc;
    if (cd > n) ans += n;
    else ans += cd;

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