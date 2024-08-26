#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{   
    
    int t; cin >> t;
    while(t--) {
        int arr[4];
        for (int i = 0; i < 3; i++) {
            cin >> arr[i];
        }
        int diff[4];
        diff[0] = abs(arr[0] - arr[1]);
        diff[1] = abs(arr[1] - arr[2]);
        diff[2] = abs(arr[2] - arr[0]);       
        int cut = 0;
        for (int i = 0; i < 3; i++) {
            cut = __gcd(cut,diff[i]);
        }

        if (cut == 0) cout << 0 << endl;
        else{
            sort(arr+0,arr+3);

            ll ans = 0;
            ans += (arr[1] - arr[0]) / cut;
            ans += (arr[2] - arr[1]) / cut;
            cout << ans << endl;
        }
    
    }
    
    return 0;
} 