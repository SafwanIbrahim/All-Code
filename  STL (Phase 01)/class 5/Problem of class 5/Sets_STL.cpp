#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    set<int>st;

    int q; cin >> q;
    while(q--) {
        int y,x; cin >> y >> x;
        if (y == 1) st.insert(x);
        else if (y == 2) {
            if (st.find(x) != st.end()) st.erase(x);
        }
        else if (y == 3) {
            if (st.count(x)) cout << "Yes\n";
            else cout << "No\n";
        }
    }
    return 0;
}