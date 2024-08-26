#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 2e5+10;
ll suffix[N];

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int arr[n+1]; 
    arr[n] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    
    int mod = 1e9+7;
    for (int i = n; i >= 2; i--) {
        suffix[i] = suffix[i+1] + arr[i];
        suffix[i] %= mod;
        //cout << suffix[i] << " ";
    }

    ll sum = 0;


    for (int i = 1; i < n; i++) {
        sum += arr[i] * suffix[i+1];
        sum %= mod;
    }
    cout << sum << endl;

    return 0;
} 