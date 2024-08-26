#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll ans = 0;
        if (n <= 6) ans = 6;
        else {
            ans = (n+2-1) /2*2;
        }
        ans = ans/2*5;
        cout << ans << endl;
    }
    
    return 0;
} 