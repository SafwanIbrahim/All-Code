#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int x,n; cin >> x >> n;
    vector<int>v(n);
    for (auto &a : v) {
        cin >> a;
    }

    sort(v.rbegin(),v.rend());

    ll ans = 0;
    for (int i = 0; i < n-1; i++) {
        ans += x;
        x -= v[i];
    }

    cout << ans << endl;
    
    return 0;
} 