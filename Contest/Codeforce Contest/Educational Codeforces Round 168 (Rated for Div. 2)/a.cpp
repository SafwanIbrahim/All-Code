#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'


void solve()
{
    string s; cin >> s;
    int indx = s.size()-1;
    for (int i = 0; i < s.size()-1; i++) {
        if (s[i] == s[i+1]) {
            indx = i;
            break;
        }
    }
    char word = (s[indx] == 'a' ? 'b' : 'a');
    indx++;
    s.insert(s.begin()+indx,word);
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