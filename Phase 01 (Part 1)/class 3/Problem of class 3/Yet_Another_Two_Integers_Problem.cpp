#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int a,b; cin >> a >> b;
    int n = abs(a-b);
    int moves = 0;

    if (n % 10 != 0) moves++;
    moves += n / 10;
    cout << moves << endl;

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

