#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s,t; cin >> s >> t;
    cout << (s < t ? "Yes\n" : "NO\n");

    // for (int i = 0; i < min(s.size(),t.size()); i++) {
    //     if (s[i] < t[i]) {
    //         cout << "Yes\n";
    //         return 0;
    //     }
    //     else if (s[i] > t[i]) {
    //         cout << "No\n";
    //         return 0;
    //     }
    // }

    // if(s.size()<t.size()) {
    //     cout << "Yes\n";
    // }
    // else {
    //     cout << "No\n";
    // }


    return 0;
} 