#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for (char w = 'A'; w <= 'Z'; w++) {
        //cout << w << endl;
        // for (int i = 8; i >= 0; i--) {
        //     cout << ((int(w) >> i) & 1);
        // }
        // cout << ((int(w) >> 5) & 1);
        // cout << endl;
        //cout << char(w | (1 << 5)) << endl;
    }
    cout << char('B' | ' ') << " " << char('b'&'_');
    return 0;
} 