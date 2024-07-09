#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    ll a,b; cin >> a >> b;

    cout << (a*b)/gcd(a,b) << endl; 
}

int main()
{   
    int t = 1;
    //cin >> t;
    while(t--)
    {
        solve();
    }
    
    return 0;
} 

