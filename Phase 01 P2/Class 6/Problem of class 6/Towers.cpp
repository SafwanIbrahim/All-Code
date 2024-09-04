#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    multiset<int>st;

    int tower = 0;
    for (int i = 1; i <= n; i++) {
        int size; cin >> size;
        if (st.upper_bound(size) != st.end()) {
            st.erase(st.upper_bound(size));
        }
        else {
            tower++;
        }
        st.insert(size);
    }

    cout << tower << endl;

    return 0;
}