#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() 
{
    int n; cin >> n;
    for (int y = 0; y <= 700; y++) {
        int check = n-2021*y;
        if (check < 0) {
            cout << "NO\n";
            return;
        }
        if (check % 2020 == 0) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--) solve();
    return 0;
} 