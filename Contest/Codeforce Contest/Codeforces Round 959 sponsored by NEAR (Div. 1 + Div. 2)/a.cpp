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
        int n,m; cin >> n >> m;
        int arr[n][m];
        int check = n*m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        if (check == 1) {
            cout << -1 << endl;
        }
        else {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if (arr[i][j] == check) cout << 1 << " ";
                    else cout << arr[i][j] + 1 << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}