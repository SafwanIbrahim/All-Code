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
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        while(true) {
            int mini = INT_MAX;
            int maxi = INT_MIN;
            for (int i = 0; i < n; i++) {    
                if (arr[i] > maxi) maxi = arr[i];
                if (arr[i] < mini) mini = arr[i];
            }
            if (mini == maxi) {
                cout << mini << endl;
                break;
            }
            else {
                for (int i = 0 ; i < n; i++) {
                    arr[i] = (arr[i] & mini);
                }
            }
        }

    }
    
    return 0;
} 