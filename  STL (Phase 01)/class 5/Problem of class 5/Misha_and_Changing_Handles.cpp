#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    map<string,string>mp;
    while(t--) {
        string key,value; cin >> value >> key;
        if(mp.find(value) == mp.end()) {
            mp[key] = value;
        }
        else {
            map<string,string>::iterator it = mp.find(value);
            string stored_value = (*it).second;
            mp.erase(mp.find(value));
            mp[key] = stored_value;
        }
    }

    cout << mp.size() << endl;
    for (auto [x,y] : mp) {
        cout << y << " " << x << endl;
    }
    return 0;
}
