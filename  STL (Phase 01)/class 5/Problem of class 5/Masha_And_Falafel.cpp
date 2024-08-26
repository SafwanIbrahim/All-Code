#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        set<int>st;
        int n; cin >> n;
        while(n--) {
            int a; cin >> a;
            st.insert(a);
            cout << st.size() << " ";
        }
        cout << endl;
    }
    return 0;
}