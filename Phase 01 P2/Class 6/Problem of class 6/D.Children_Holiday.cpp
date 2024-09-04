#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 1005;
int people,t[N],z[N],y[N];
ll ballon;

bool ok(int time) {
    ll total = 0;
    for (int i = 0; i < people; i++) {
        int block = t[i]*z[i]+y[i];
        total += 1LL*(time/block)*z[i];
        int extra = time%block;
        if (extra > t[i]*z[i]) {
            extra = t[i]*z[i];
        }
        total += extra/t[i];
    }
    return total >= ballon;
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> ballon >> people;
    for (int i = 0; i < people; i++) {
        cin >> t[i] >> z[i] >> y[i];
    }

    int lo = 0, hi = 1e7, ans = 0;

    while(lo <= hi) {
        int mid = (lo+hi)/2;
        if (ok(mid)) {
            ans = mid;
            hi = mid-1;
        }
        else {
            lo = mid+1;
        }
    }
    cout << ans << endl;

    for (int i = 0; i < people; i++) {
        int block = t[i]*z[i]+y[i];
        ll single = 1LL*(ans/block)*z[i];
        int extra = ans%block;
        if (extra > t[i]*z[i]) {
            extra = t[i]*z[i];
        }
        single += extra/t[i];
        single = min(single,ballon);
        cout << single << " ";
        ballon -= single;
    }
    cout << endl; 
    
    return 0;
} 