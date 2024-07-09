#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'


int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--)
    {
        int n,k; cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int handsome = arr[0];
        for (int i = 0; i < n; i++) {
            handsome = (handsome & arr[i]);
        }
        if (handsome < k) cout << "YES" << endl;
        else cout << "NO" << endl;
 
    }
    
    return 0;
} 