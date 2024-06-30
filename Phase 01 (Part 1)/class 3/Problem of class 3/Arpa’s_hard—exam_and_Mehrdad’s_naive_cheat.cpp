#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int n; cin >> n;
    if (n == 0) 
    {
        cout << 1 << endl;
    }
    else
    {
        n = n % 4;
        if (n == 1) cout << 8;
        if (n == 2) cout << 4;
        if (n == 3) cout << 2;
        if (n == 0) cout << 6;
    }
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

