#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

ll square_sum(ll n)
{
    ll ans = n * (n + 1) * (2 * n + 1);
    return ans / 6;
}

ll qube_sum(ll n)
{
    ll ans = (n*(n+1)) / 2;
    return ans * ans;
}

void solve()
{
    int n; cin >> n;
    cout << qube_sum(n) - square_sum(n) << endl;
}

int main()
{   
    int t = 1;
    cin >> t;    
    while(t--) solve(); 
    return 0;
} 


