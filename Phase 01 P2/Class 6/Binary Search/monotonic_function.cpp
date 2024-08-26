#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 1e5 + 7;
int n,arr[N];
ll s;

bool great(int x) {
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i] / x;
    }
    return sum >= s;
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int l = 0, r = 1e9 , ans = -1;
    while(l <= r) {
        int mid = (l+r) / 2;
        if (great(mid)) {
            ans = mid;
            l = mid+1;
        }
        else {
            r = mid-1;
        }
    }
    cout << ans << endl;
    return 0;
}