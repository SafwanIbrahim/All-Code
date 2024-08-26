#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int n; cin >> n;
    cout << (n%2 ? n/2 : (n/2)-1) << endl;
    // if (n%2 == 0) {
    //     cout << (n/2)-1 << endl;
    // }
    // else cout << n/2 << endl;
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1; cin >> t;
    while(t--) solve();
    return 0;
} 