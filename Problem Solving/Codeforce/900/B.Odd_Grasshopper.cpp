#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    ll n,j; cin >> n >> j;
    if (j % 4 == 1) {
        if (n%2 == 0) n -= j;
        else n += j;
    }
    else if (j % 4 == 2) {
        if (n % 2 == 0) n++;
        else n--;
    }  
    else if (j % 4 == 3) {
        if (n % 2 == 0) n += j+1;
        else n -= j+1;
    }
    cout << n << endl;
    
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
} 