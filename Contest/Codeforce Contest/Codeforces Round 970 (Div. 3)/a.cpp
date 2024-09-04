#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int a,b; cin >> a >> b;
    
    if (a%2 == 1) {
        cout << "NO\n";
    }
    else if (b%2 == 1 and a == 0) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
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