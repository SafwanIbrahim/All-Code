#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int arr[n+1];
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    sort(arr+1,arr+n+1);
    int q; cin >> q;
    while(q--) {
        int m; cin >> m;
        cout << upper_bound(arr+1,arr+n+1,m) - &arr[1] << endl;
    }
    
    return 0;
} 