#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s,t;
    cin >> s >> t;
    int total = s.size()+t.size();
    int extra = 0;
    int len_s = s.size()-1, len_t = t.size()-1;

    for (int i = 0; i < min(s.size(),t.size()); i++) {
        if (s[len_s--] != t[len_t--]) break;
        extra += 2;
    }
    cout << total - extra << endl;

    return 0;
} 