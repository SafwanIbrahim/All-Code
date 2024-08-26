#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int n,a,b; cin >> n >> a >> b;
    int arr[n];
    int number = n;

    arr[n/2-1] = a;
    arr[n/2] = b;
    for (int i = n/2-2 ; i >= 0; i--) {
        if (number == b) number--;
        if (number > n or number < 1 or number <= a) {
            cout << -1 << endl;
            return;
        }
        arr[i] = number--;
    }
    
    number = 1;
    for (int i = n/2+1; i < n; i++) {
        if (number == a) number++;
        if (number == arr[0] or number > n or number < 1 or number >= b) {
            cout << -1 << endl;
            return;
        }
        arr[i] = number++;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}