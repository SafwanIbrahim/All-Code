#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1; cin >> t;
    int n = t;
    double sum = 0;
    while(t--) {
        int a; cin >> a;
        sum += a;
    }
    cout << fixed << setprecision(8) << sum/n << endl;
    return 0;
} 