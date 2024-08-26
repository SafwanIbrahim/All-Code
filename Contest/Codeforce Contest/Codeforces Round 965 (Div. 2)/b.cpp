#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int brr[n];
    brr[0] = arr[n-1];
    for (int i = 1; i < n; i++) {
        brr[i] = arr[i-1];
    }
    
    for (int i = 0; i < n; i++) {
        cout << brr[i] << " ";
    }
    cout << endl;
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1; cin >> t;
    while(t--) solve();
    return 0;
} 