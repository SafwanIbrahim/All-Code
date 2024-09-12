#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
const int N = 1e5+9;
int n,pos[N],ve[N];
 
bool p(double time) {
    double l = -1e10,r = 1e10;
    for (int i = 0; i < n; i++) {
        r = min(r,pos[i]+time*ve[i]);
        l = max(l,pos[i]-time*ve[i]);
    }
    return l <= r;
}
 
int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> pos[i] >> ve[i];
    }
 
    double time = 0;
    double lo = 0, hi = 1e9+9;
    int it = 100;
    while(it--) {
        double mid = (hi+lo)/2;
        if (p(mid)) {
            time = mid;
            hi = mid;
        }
        else {
            lo = mid;
        }
    }
    cout << fixed << setprecision(7) << time << endl; 
 
    
    return 0;
}