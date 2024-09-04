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

    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        int duration,deadline;
        cin >> duration >> deadline;
        arr[i] = duration;
        ans += deadline;
    }

    sort(arr+1,arr+n+1);

    ll finishing_time = 0;
    for (int i = 1; i <= n; i++) {
        finishing_time += arr[i];
        ans -= finishing_time;
    }

    cout << ans << endl;
    
    return 0;
} 