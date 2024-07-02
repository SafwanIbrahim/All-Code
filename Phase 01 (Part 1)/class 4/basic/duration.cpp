#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    clock_t start = clock();
    ll sum = 0;
    int n = 1e9;
    while(n--)
    {
        sum += n;
    }
    cout << sum << endl;
    clock_t end = clock();
    cout << 1.0 * (end - start )/ CLOCKS_PER_SEC << endl;
    
    return 0;
} 