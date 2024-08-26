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
        int n,m,i,j; cin >> n >> m >> i >> j;
        int x1,y1,x2,y2;
        if (n/2 > i) x1 = 1;
        else x1 = n;
        if (m/2 > j) y1 = 1;
        else y1 = m;
        x2 = n-x1+1; y2 = m-y1+1;
        cout << x1 << " " << y1 << " " << x2 << " " << y2 <<endl;
    }
    
    return 0;
} 