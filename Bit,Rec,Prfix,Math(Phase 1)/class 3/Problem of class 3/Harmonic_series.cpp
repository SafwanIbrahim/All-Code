#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{   
    double ans = 0;
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        ans += 1.0/i;
    }
    cout << fixed << setprecision(4) << ans << endl;
}

int main()
{   
    int t = 1;
    //cin >> t;    
    while(t--) solve(); 
    return 0;
} 


