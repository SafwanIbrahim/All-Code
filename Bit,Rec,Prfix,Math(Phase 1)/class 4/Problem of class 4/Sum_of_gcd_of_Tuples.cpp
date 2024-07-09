#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll ans = 0;

    int k; cin >> k;
    for (int i = 1; i <= k ; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            for (int x = 1; x <= k ; x++)
            {
                int a = __gcd(i,j);
                ans += __gcd(a,x);
            }
        }
    }
    cout << ans << endl;
    
    return 0;
} 