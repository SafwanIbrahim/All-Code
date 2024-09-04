#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 1e5+7;
int x,arr[N];

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,q; cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    while(q--) {
        cin >> x;
        int ans = n+1;
        int lo = 1, hi = n;
        while(lo <= hi) {
            int mid = (lo+hi)/2;
            if (arr[mid] >= x) {
                ans = mid;
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