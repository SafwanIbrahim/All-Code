#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

double n;

bool poss(double x) {
    return x*x+sqrt(x) >= n;
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    double lo = 0, hi = 1e5;
    double ans = 0;

    while(hi-lo > 1e-7) {
        double mid = (lo+hi)/2;
        if (poss(mid)) {
            hi = mid;
            ans = mid;
        }
        else {
            lo = mid;
        }
    }

    cout << fixed << setprecision(5) << ans << endl;
    return 0;
} 