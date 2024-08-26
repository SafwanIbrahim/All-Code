#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() 
{
    int n; cin >> n;
    int arr[n];
    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxi = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxi) maxi = arr[i];
    }

    int check = arr[n-1];
    for (int i = n-2; i >= 0; i--) {
        if (check == maxi)  break;
        else if (arr[i] > check) {
            check = arr[i];
            ans++;
        }
    } 
    cout << ans << endl;
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin  >> t;
    while(t--) solve();
    return 0;
}