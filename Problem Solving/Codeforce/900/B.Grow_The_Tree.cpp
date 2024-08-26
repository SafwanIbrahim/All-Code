#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int arr[n]; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr+0,arr+n);
    ll x = 0,y = 0;
    for (int i = 0, j = n-1; i <= j; i++,j--) {
        x += arr[j];
        if (i != j) y += arr[i];
    }

    cout << x*x + y*y << endl;
    
    return 0;
} 