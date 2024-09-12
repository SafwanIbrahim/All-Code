#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 2e5+9;
int n,k,arr[N];

bool ok(int x) {
    int op = 0;
    for (int i = n/2+1; i <= n; i++) {
        if (x > arr[i]) {
            op += x-arr[i];
        }
        if (op > k) {
            return false;
        }
    }
    return true;
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    sort(arr+1,arr+n+1);

    int lo = arr[n/2+1], hi = 2e9, ans = 1;
    while(lo <= hi) {
        int mid = lo+(hi-lo)/2;
        if (ok(mid)) {
            ans = mid;
            lo = mid+1;
        }
        else {
            hi = mid-1;
        }
    }

    cout << ans << endl;
    
    return 0;
} 