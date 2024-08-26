#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() 
{
    string s; cin >> s;
    if (s[0] == 'b' and s[s.size()-1] != 'b') s[s.size()-1] = 'b';
    else if (s[0] == 'a' and s[s.size()-1] != 'a') s[s.size()-1] = 'a';
    cout << s << endl;
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
} 