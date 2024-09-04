#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int n; cin >> n;
    char arr[n+5];
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    int check = sqrt(n);
    if (check*check != n) {
        cout << "NO\n";
        return;
    }
    int index_of_zero = 0;
    for (int i = 1; i <= n; i++) {
        if (arr[i] == '0') {
            index_of_zero = i;
            break;
        }
    }
    if (n == 4) {
        if (index_of_zero == 0) {
            cout << "YES\n";
            return;
        }
        else {
            cout << "NO\n";
            return;
        }
    }
    if (index_of_zero - 2 == check) {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";

}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1; cin >> t;
    while(t--) solve();
    return 0;
} 