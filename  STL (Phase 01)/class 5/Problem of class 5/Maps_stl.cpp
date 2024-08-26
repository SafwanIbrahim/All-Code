#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    map<string,int>mp;
    int q; cin >> q;
    string x;
    while(q--) {
        int type; cin >> type >> x;
        if (type == 1) {
            int y; cin >> y;
            // if (mp.find(x)!= mp.end()) {
            //     mp[x] += y;
            // } else {
            //     mp[x] = y;
            // }
            mp[x] += y; // if x key doesn't exist then it's value is 0 by default
        }
        else if (type == 2) {
            mp[x] = 0;
        }
        else {
            cout << mp[x] << endl;
        }
    }
    
    return 0;
} 