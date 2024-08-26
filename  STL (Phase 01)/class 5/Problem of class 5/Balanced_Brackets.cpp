#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'


map<char,char>mp;

bool check(string& s) 
{   
    stack<char>st;
    for (int j = 0; j < s.size(); j++) {
        for (auto [x,y] : mp) {
            if (s[j] == y) {
                st.push(y);
            }
            else if (s[j] == x) {
                if(!st.empty() and st.top() == mp[s[j]]) {
                    st.pop();
                }
                else {
                    return false;
                }
            }
        }
    }
    return st.empty();
}
int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    mp[')'] = '(';
    mp['}'] = '{';
    mp[']'] = '[';
    int t; cin >> t;
    while(t--) {
    string s; cin >> s;
    if(check(s)) cout << "YES\n";
    else cout << "NO\n";
    }
}