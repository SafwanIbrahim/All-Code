#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int c;

void solve()
{   
    cout << "Case "<< c++ << ":" << endl;
    int n,q; cin >> n >> q;
    int arr[n+1];
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    while(q--) {
        int a,b; cin >> a >> b;
        cout << upper_bound(arr+1,arr+n+1,b) - lower_bound(arr+1,arr+n+1,a) << endl;
    }
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    c = 1;
    int t = 1; cin >> t;
    while(t--) solve();
    return 0;
} 