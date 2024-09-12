#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,k; cin >> n >> k;
    string s; cin >> s;
    char t[k+5];
    set<char>st;
    for (int i = 0; i < n; i++) {
        st.insert(s[i]);
    }
    if (k > n) {
        while(k-- != n) {
            s += *(st.begin());
        }
        cout << s << endl;
        return 0;
    }
    for (int i = 0; i < k; i++) {
        t[i] = s[i];
    }
    for (int i = k-1; i >= 0; i--) {
        if(s[i] != *st.rbegin()) {
            auto it = st.find(s[i]);
            it++;
            t[i] = *it;
            while(i != k) {
                t[++i] = *st.begin();
            }
            break;
        }
    }
    for (int i = 0; i < k; i++) {
        cout << t[i];
    }
    cout << endl;
    return 0;
} 