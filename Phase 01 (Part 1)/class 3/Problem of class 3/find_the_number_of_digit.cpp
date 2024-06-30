#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int n; cin >> n;

    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += log10(i);
    }
    cout << floor(sum) + 1 << endl;
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

