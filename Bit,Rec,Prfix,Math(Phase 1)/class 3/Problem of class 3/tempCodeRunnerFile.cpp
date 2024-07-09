#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{   
    int n; cin >> n;
    int mod = 1000000007;
    ll ans = 1;
    for (ll i = 1; i <= n; i++)
    {   
        ans = ans % mod;
        ans *= i % mod;
    }
    cout << ans % mod << endl;

}

int main()
{   
    int t = 1;
    cin >> t;    
    while(t--) solve(); 
    return 0;
} 


