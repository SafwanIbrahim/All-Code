#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int divisor[17];

void solve() 
{
    int n; cin >> n;
    ll arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ll sum = 0;

    for (int i = 0; i < n; i++) {
        ll brr[n];
        brr[i] = arr[i];

        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (arr[j] % 2 == 0) {
                brr[j] = arr[j] / (1 << divisor[arr[j]]);
                brr[i] *= (1 << divisor[arr[j]]);
            }
            else brr[j] = arr[j];
        }

        ll current_sum = 0;
        for (int j = 0; j < n; j++) {
            current_sum += brr[j];
        }
        sum = max(sum,current_sum);
    }

    cout << sum << endl;
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    divisor[16] = 4;
    divisor[14] = 1;
    divisor[12] = 2;
    divisor[10] = 1;
    divisor[8] = 3;
    divisor[6] = 1; 
    divisor[4] = 2; 
    divisor[2] = 1; 
    while(t--) solve();
    return 0;
} 