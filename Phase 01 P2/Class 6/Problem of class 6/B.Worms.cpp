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
    arr[1] = 1;
    int x = 0;
    for (int i = 1; i < n; i++) {
        int a; cin >> a;
        x += a;
        arr[i+1] = x+1;
    }
    cin >> arr[0];

    int q; cin >> q;
    while(q--) {
        int p; cin >> p;
        cout << upper_bound(arr+1,arr+n+1,p) - &arr[1] << endl;
    }
    return 0;
} 