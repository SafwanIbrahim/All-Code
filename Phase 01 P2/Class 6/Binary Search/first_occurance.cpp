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

    for (int i = 0; i < n ; i++) { // input eliment in sorted order 0 or 1;
        cin >> arr[i];
    }

    int idx = -1;
    int l = 0, r = n-1;
    while(l <= r) {
        int mid = (l+r)/2;
        if (arr[mid] == 1) {
            idx = mid;
            r = mid-1;
        }
        else if (arr[mid] == 0) {
            l = mid+1;
        }
    }
    cout << idx;
    return 0;
}