#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

ll sum(ll n)
{
    ll sum = 0;
    while(n % 4 != 3 and n != 0)
    {
        sum = (sum ^ n);
        n--; 
    }
    return sum;
}

ll ans(ll l, ll r)
{   
    if (l == 0) return (sum(r) ^ sum (l));
    return (sum(r) ^ sum(l-1));
    
}



int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll x , y; cin >> x >> y;
    cout << ans(x,y) << endl;

    return 0;
} 