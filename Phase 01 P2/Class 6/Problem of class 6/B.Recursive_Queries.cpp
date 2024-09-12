#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 1e6+9;
int arr[N];

int p(int n) {
    int a = 1;
    while(n > 0) {
        if (n%10 != 0) {
            a *= n%10;
        }
        n /= 10;
    }
    return a;
}

int rec(int n) {
    if (arr[n] != 0) {
        return arr[n];
    }
    if (n < 10) {
        return n;
    }
    arr[n] = rec(p(n));
    return arr[n];
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int>v[10];

    for (int i = 1; i <= 1e6; i++) {
        int s = rec(i);
        v[s].push_back(i);
    }

    int q; cin >> q;
    while(q--) {
        int l,r,k; cin >> l >> r >> k;
        auto upper = upper_bound(v[k].begin(),v[k].end(),r);
        auto lower = lower_bound(v[k].begin(),v[k].end(),l);
        cout << upper - lower << endl;
    }

    return 0;
} 