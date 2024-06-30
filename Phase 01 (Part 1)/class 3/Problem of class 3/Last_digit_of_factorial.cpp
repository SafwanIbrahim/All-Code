#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int n; cin >> n;
    ll ans = 1;
    for (int i = 2; i <= n; i++)
    {
        ans *= i;
    }
    cout << ans % 10 << endl;
}

int main()
{   
    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    
    return 0;
} 

