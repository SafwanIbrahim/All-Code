#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    
    string s; cin >> s;
    stack<char>st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            st.push(s[i]);
        }
        else {
            if (st.empty()) {
                cout << "NO\n";
                return 0;
            }
            else {
                st.pop();
            }
        }
    }

    if (st.empty()) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
    
    return 0;
}