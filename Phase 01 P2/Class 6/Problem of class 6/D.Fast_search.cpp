#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int arr[n+1];
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    sort(arr+1,arr+n+1);

    int q; cin >> q;
    while(q--) {
        int l; cin >> l;
        int index_of_l = 0;
        int lo = 1, hi = n;
        while(lo <= hi) {
            int mid = (hi+lo)/2;
            if (arr[mid] < l) {
                index_of_l = mid;
                lo = mid+1;
            }
            else {
                hi = mid-1;
            }
        }
        int r; cin >> r;
        int index_of_r = n+1;
        lo = 1, hi = n;
        while(lo <= hi) {
            int mid = (lo+hi)/2;
            if (arr[mid] > r) {
                index_of_r = mid;
                hi = mid-1;
            }
            else {
                lo = mid+1;
            }
        }
        cout << index_of_r-index_of_l-1 << " ";
    }
    cout << endl;
    
    return 0;
} 