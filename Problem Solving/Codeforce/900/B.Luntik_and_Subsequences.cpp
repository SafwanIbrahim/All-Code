#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n ; i++) {
        cin >> arr[i];
    }
    ll zeros = 0;
    ll ones = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) zeros++;
        else if (arr[i] == 1) ones++;
    }
    cout << ones * (1LL << zeros) << endl;
}
int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
} 