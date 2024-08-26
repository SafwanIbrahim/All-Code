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
        int n; cin >> n;
        char st[n];
        for (int i = 0; i < n; i++) {
            cin >> st[i];
        }

        int total_one = 0;
        int tana_zero = 0;
        for (int i = 0; i < n; i++) {
            if(st[i] == '0') {
                while(st[i] == '0' and i < n) {
                    i++;
                }
                tana_zero++;
                i--;
            }
            else {
                total_one++;
            }
        }
        if (tana_zero < total_one) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
} 