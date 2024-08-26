#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int n; cin >> n;
    int c = 1;
    int a,b;
    if (n % 2 == 0) {
        a = n/2;b = a-1;
    }
    else {
        a = n/2-1; b = n/2+1;
        if (a % 2 == 0) {
            a--;
            b++; 
        }
    }
    cout << a << " " << b << " " << c << endl;
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
} 