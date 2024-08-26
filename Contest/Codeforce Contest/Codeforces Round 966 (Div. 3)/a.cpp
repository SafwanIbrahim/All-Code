#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    string s; cin >> s;
    if (s.size() > 2) {
        if (s[0] == '1' and s[1] == '0' and s[2] - '0' > 0) {
            if (s[2] - '0' == 1 and s.size() == 3) {
                cout << "NO\n";
            }
            else cout << "YES\n";
        }
        else cout << "NO\n";
    }
    else cout << "NO\n";
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1; cin >> t;
    while(t--) solve();
    return 0;
} 