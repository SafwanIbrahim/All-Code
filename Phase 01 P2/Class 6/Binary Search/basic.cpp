#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int arr[n]; // input array in increasing sequence 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int number; cin >> number;
    int l = 0, r = n-1;
    bool not_found = true;

    while(l <= r) {
        int mid = (l+r) / 2;
        if (arr[mid] == number) {
            cout << "YES\n";
            not_found = false;
            break;
        }
        else if (number > arr[mid]) {
            l = mid+1;
        }
        else if (number < arr[mid]) {
            r = mid-1;
        }
    }
    if (not_found) {
        cout << "NO\n";
    }
    return 0;
} 