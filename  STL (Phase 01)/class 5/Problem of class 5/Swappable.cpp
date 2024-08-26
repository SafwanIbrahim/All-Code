#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    multiset<int>ms;
    set<int>s;

    int n; cin >> n;
    ll ans = (1LL * n*(n-1)) / 2;

    while(n--) {
        int a; cin >> a;
        ms.insert(a);
        s.insert(a);
    }

    for (auto i = s.begin(); i != s.end(); i++) {
        int cnt = ms.count(*i);
        ll sum = (1LL * cnt*(cnt-1)) / 2;
        ans -= sum;
    }
    cout << ans << endl;

    return 0;
} 