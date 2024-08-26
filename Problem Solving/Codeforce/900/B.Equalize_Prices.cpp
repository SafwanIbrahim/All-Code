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
        int n,k; cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int mini = 1e8 + 1000;
        int maxi = -100;

        for (int i = 0; i < n; i++) {
            if (arr[i] > maxi) maxi = arr[i];
            if (arr[i] < mini) mini = arr[i];
        }
        if ((maxi - mini) > k*2) {
            cout << -1 << endl;
        }
        else {
            cout << mini+k << endl;
        }
    }
    
    return 0;
} 