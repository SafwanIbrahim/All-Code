#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 2e5+9;
int arr[N],brr[N];

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,k; cin >> n >> k;
    
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];   
    }

    // for (int i = 1; i <= n; i++) {
    //     brr[i] = arr[i];
    // }
    // sort(brr+1,brr+n+1);

    // int value1,value2;
    // bool got = false;

    // for (int i = 1; i < n; i++) {
    //     value1 = brr[i], value2 = 0;
    //     int lo = i+1, hi = n;
        
    //     while(lo <= hi) {
    //         int mid = (lo+hi)/2;
    //         if (brr[mid]+value1 < k) {
    //             lo = mid+1;
    //         }
    //         else if (brr[mid]+value1 > k) {
    //             hi = mid-1;
    //         }
    //         else {
    //             value2 = brr[mid];
    //             got = true;
    //             break;
    //         }
    //     }
    //     if (got) break;
    // }
    // if (got) {
    //     int inx = 0;
    //     for (int i = 1; i <= n; i++) {
    //         if (arr[i] == value1) {
    //             inx = i;
    //             cout << i << " ";
    //             break;
    //         }
    //     }

    //     for (int i = 1; i <= n; i++) {
    //         if (i == inx) {
    //             continue;
    //         }
    //         else if (arr[i] == value2) {
    //             cout << i << endl;
    //             break;
    //         }
    //     }
    // }
    // else cout << "IMPOSSIBLE\n";
    map<int,int>mp;
    for (int i = 1; i <= n; i++) {
        if (mp.find(k-arr[i]) != mp.end()) {
            cout << mp[k-arr[i]] << " " << i << endl;
            return 0;
        }
        else mp[arr[i]] = i;
    }
    cout << "IMPOSSIBLE\n";

    return 0;
}