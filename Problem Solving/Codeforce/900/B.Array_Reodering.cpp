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
        deque<int>d;
        int ans = 0;
        int n; cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 0) {
                d.push_front(arr[i]);
            }
            else {
                d.push_back(arr[i]);
            }
        }
        for (deque<int>::iterator i = d.begin(); i!= --d.end(); i++) {
            for (deque<int>::iterator j = i+1; j!= d.end(); j++) {
                if (gcd(2*(*j),(*i)) > 1) ans++;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
} 