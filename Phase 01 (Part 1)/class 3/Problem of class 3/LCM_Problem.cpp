#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int l,r; cin >> l >> r;
    int x = -1, y = -1;
    if(r/2 >= l)
    {
        x = r/2;
        y = x*2;
    }
    cout << x << " " << y << endl;
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

