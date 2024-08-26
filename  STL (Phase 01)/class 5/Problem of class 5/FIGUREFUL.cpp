#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    map<pair<int,int>,string>mp;

    int n; cin >> n;

    while(n--) {
        int a,b; string s; 
        cin >> a >> b >> s;
        pair <int,int>p = {a,b};
        mp[p] = s;
    }

    int t; cin >> t;
    while(t--) {
        int x,y; cin >> x >> y;
        auto p = make_pair(x,y);
        cout << mp[p] << endl; 
    }

    return 0;
} 