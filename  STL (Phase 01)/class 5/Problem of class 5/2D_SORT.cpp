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
        int n; cin >> n;
        vector<pair<int,int>>v(n);

        for (int i = 0; i < n; i++) {
            int a,b; cin >> a >> b;
            v[i] = make_pair(a,-b);
        }

        sort(v.begin(),v.end());
        // for (auto it = v.begin(); it != v.end(); it++) {
        //     cout << (*it).first << " " << -(*it).second << endl;
        // }

        for (auto [x,y] : v) {
            cout << x << " " << -y << endl;
        }
    }

    return 0;
}  