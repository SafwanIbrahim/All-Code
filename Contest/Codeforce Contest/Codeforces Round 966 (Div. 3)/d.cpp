#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int n; cin >> n;
    ll arr[n+1];
    arr[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++) {
        arr[i] = arr[i] + arr[i-1];
    }

    char s[n+5]; 
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
    } 

    ll sum = 0;

    int l = 0 , r = n+1;
    while(true) {
        bool running1 = true;
        for (int i = l+1; i <= n; i++) {
            if (s[i] == 'L') {
                l = i;
                // cout << l << " ";
                running1 = false;
                break;
            }
        }

        bool running2 = true;
        for (int i = r-1; i > 0; i--) {
            if (s[i] == 'R') {
                r = i;
               // cout << r << endl;
                running2 = false;
                break;
            }
        }
        if (l >= r or l > n or running1 or running2 ) {
            break;
        }
        else {
            sum += arr[r] - arr[l-1];
        }
    }
    cout << sum << endl;
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1; cin >> t;
    while(t--) solve();
    return 0;
} 