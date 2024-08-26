#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    set<string>st;
    string s;
    while(cin >> s) {
        string a = "";
        s += '.';
        for (int i = 0; i < s.size(); i++) {
            if (isalpha(s[i])) {
                a += tolower(s[i]);
            }
            else {
                if (!a.empty()) {
                    st.insert(a);   
                    a = "";
                }
            }
        }
    }
    for (set<string>::iterator it = st.begin(); it != st.end(); it++) {
        cout << (*it) << endl;
    } 
    return 0;
} 