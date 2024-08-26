#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int n,a,b; cin >> n >> a >> b; 
    int arr[n+1];
    for (int i = 1; i <= n; i++) {
        arr[i] = i;
    }

    int brr[n];
    for (int i = 1; i <= a; i++) {
        brr[i] = i;
    }

    for (int i = n; i > n-b; i--) {
        brr[i] = i;
    }

    for (int i = )
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1; cin >> t;
    while(t--) solve();
    return 0;
} 