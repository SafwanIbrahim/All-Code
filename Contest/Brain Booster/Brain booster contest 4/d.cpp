#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        ll n ; cin >> n;
        vector<int>v(3);
        v[0] = 6;
        v[1] = 10;
        v[2] = 15;
        int var = 2;
        for (int i = 1; i <= n-3; i++) {
            v.push_back(6*var);
            var++;
        }

        for (auto x : v) {
            cout << x << " ";
        }
        cout << endl;

    }
    return 0;
} 