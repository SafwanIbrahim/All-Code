#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int a,b; cin >> a >> b;
    int even_of_a = a/2, even_of_b = b/2;
    int odd_of_a = (a+2-1)/2, odd_of_b = (b+2-1)/2;
    cout << 1LL * even_of_a * even_of_b + 1LL* odd_of_a * odd_of_b << endl;
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1; cin >> t;
    while(t--) solve();
    return 0;
} 