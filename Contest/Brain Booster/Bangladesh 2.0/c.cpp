#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    map<int,int>mp;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        mp[x] = i;
    }

    int q; cin >> q;
    while(q--) {
        int a; cin >> a;
        auto it = mp.begin();
        int value = (*it).first;
        int indx = (*it).second;
        int store = indx;
        cout << indx << endl;
        mp.erase(value);
        mp[a] = store;
    }

    return 0;
} 