#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int n,x; cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ll ans_1 = 0;
    ll ans_2 = 0;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        ans_1 += (arr[i] + x - 1) / x;
    }
    ans_2 = (sum + x - 1) / x;
    cout << min(ans_1,ans_2) << " " << max(ans_1,ans_2) << endl;
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
} 