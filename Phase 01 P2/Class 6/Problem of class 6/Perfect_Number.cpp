#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int k; cin >> k;
    int cnt = 0;
    int n = 19;
    int ans = 0;
    while(cnt<k) {
        int sum = 0;
        int stored = n;
        while(stored > 0) {
            sum += stored%10;
            stored /= 10;
        }
        if (sum == 10) {
            cnt++;
            ans = n;
        }
        n++;
    }
    cout << ans << endl;
    
    return 0;
} 