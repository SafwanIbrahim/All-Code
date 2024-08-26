#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 1e5+7;
int n,k,arr[N],brr[N];

ll cnt (int x) {
    ll c = 0;
    for (int i = 1; i <= n; i++) {
        int ans = 0, lo = 0, hi = n;  
        while(lo <= hi) {
            ll mid = (hi+lo)/2;
            if (arr[i]+brr[mid] <= x) {
                ans = mid;
                lo = mid+1; 
            }
            else {
                hi = mid-1;
            }
        }
        c += ans;
    }
    return c;
}

bool p(int x) {
    return cnt(x) >= k;
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++) {
        cin >> brr[i];
    }

    sort(brr+1,brr+n+1);

    int ans = 0, lo = 0, hi = 2e9;

    while(lo <= hi) {
        int mid = lo+(hi-lo)/2;
        if (p(mid)) {
           hi = mid-1; 
           ans = mid;
        }
        else {
            lo = mid+1;
        }
    }
    cout << ans << endl;

    return 0;
} 