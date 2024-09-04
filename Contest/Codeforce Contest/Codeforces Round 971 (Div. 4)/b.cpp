#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int n; cin >> n;
    char arr[n+1][5];
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 4; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= 4; j++) {
            if (arr[i][j] == '#') {
                cout << j << " ";
                break;
            }
        }
    }
    cout << endl;
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1; cin >> t;
    while(t--) solve();
    return 0;
} 