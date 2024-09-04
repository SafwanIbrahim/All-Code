#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,q; cin >> n >> q;
    int arr[n+1];
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    while(q--) {
        int ans = n;
        int x; cin >> x;
        int lo = 1, hi = n;
        while(lo <= hi) {
            int mid = (hi+lo)/2;
            if (arr[mid] > x) {
                ans = mid-1;
                hi = mid-1;
            }
            else {
                lo = mid+1;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
} 