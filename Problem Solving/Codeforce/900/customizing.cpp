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
        int arr[n];
        int suffix[n+1];

        suffix[n] = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        ll sum = 0;

        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }

        int av = sum/n;
        int extra = sum%n;

        for (int i = 0; i < n; i++) {
            arr[i] = av;
        }

        int v = 0;
        while(extra--) {
            arr[v]++;
            v++;
            if (v == n) v = 0;
        }

        ll ans_sum = 0;
        for (int i = n-1; i >= 0; i--) {
            suffix[i] = suffix[i+1]+arr[i];
        }

        for (int i = 0; i < n-1; i++) {
            ans_sum+= arr[i] * (n-i-1) - suffix[i+1];
        }
        cout << ans_sum << endl;
    }
    
    return 0;
}              