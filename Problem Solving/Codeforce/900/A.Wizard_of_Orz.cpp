#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 1e6;
int arr[N];

void solve()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cout << arr[i];
    }
    cout << endl;
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    arr[0] = 9;
    arr[1] = 8;
    arr[2] = 9;
    int go = 0;
    for (int i = 3; i < N; i++) {
        arr[i] = go;
        if (go == 9) go = 0;
        else go++;
    }
    while(t--) solve();
    return 0;
} 