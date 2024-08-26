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
        int n; cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        short ans = 0;
        if (is_sorted(arr+0,arr+n)) ans = 0;
        else if(arr[0] == n and arr[n-1] == 1) ans = 3;
        else {
            if (arr[n-1] == n or arr[0] == 1) ans = 1;
            else ans = 2;
        }
        cout << ans << endl;
    }
    return 0;
}