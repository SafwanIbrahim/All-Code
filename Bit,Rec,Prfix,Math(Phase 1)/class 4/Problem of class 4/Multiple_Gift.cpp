#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll x,y; cin >> x >> y;
    ll check = 0;
    int ans = 0;
    for (ll i = x; i <= y; i = i*2)
    {   
        ans++;
    }
    cout << ans << endl;
    
    return 0;
} 