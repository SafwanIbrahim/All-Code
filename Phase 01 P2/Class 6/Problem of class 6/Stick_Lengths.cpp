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

    int chosen = arr[(n+1)/2];
    ll ans = 0;

    for (int i = 1; i <= n; i++) {
       ans += abs(chosen-arr[i]);
    }
    cout << ans << endl;
    
    return 0;
}
