#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 1e4+8;
int n,k,arr[N];

bool p(double x) 
{   
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        cnt += (int)(arr[i]/x);
    }
    return cnt >= k;
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    double lo = 0, hi = 1e7, ans;
    while(hi-lo >= 1e-7) {
        double mid = (hi+lo)/2;
        if (p(mid)) {
            ans = mid;
            lo = mid;
        }
        else {
            hi = mid;
        }
    }
    cout << fixed << setprecision(7) << ans << endl;
    
    
    return 0;
} 