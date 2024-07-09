#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int x,y; cin >> x >> y;

    if (y % x == 0) 
    {
        cout << x << " " << y << endl;
        return;
    }
    cout << -1 << endl;
    return;
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

