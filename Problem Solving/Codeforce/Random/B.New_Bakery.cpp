#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{   
    int t; cin >> t;
    while(t--)
    {
        ll n,a,b; cin >> n >> a >> b;
        if (a >= b)
        {
            cout << a * n << endl;
        }
        else
        {
            ll num = min(n,b-a);
            ll profit = (num * ((2*b)-num+1))/2;
            ll m = n-num;
            ll ans = (m*a) + profit;
            cout << ans << endl;
        }
    }

    return 0;
} 


