#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    ll n; cin >> n;
    ll check = ((n) & (n-1));
    if (check == 0) cout << "NO" << endl;
    else cout << "YES" << endl;
}

int main()
{   
    int t; cin >> t;
    while(t--)
    {
        solve();
    }  
    return 0;
} 

