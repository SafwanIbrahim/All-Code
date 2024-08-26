#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    set<int>st;
    int n; cin >> n;
    int a; cin >> a;
    st.insert(a);
    bool yes = true;
    for (int i = 1; i < n; i++) {
        int x; cin >> x;
        if (st.find(x-1) != st.end() or st.find(x+1) != st.end()) {
            st.insert(x);
        }
        else {
            if (yes) {
                cout << "NO\n";
                yes = false;
            }
        }
    }
    if (yes) {
        cout << "YES\n";
    }
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1; cin >> t;
    while(t--) solve();
    return 0;
} 