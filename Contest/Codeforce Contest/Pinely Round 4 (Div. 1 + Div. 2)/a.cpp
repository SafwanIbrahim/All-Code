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
        multiset<int>m;
        int arr[n+1];
        int indx = -10;

        for (int i = 1;i <= n; i++) {
            cin >> arr[i];
        }

        while(true) {
            int maxi = -1;
            for (int i = 1; i <= n; i++) {
                if (arr[i] > maxi and m.find(i) == m.end()) {
                    maxi = arr[i];
                    indx = i;
                }  
            }
            m.insert(indx);
            if ((n - indx) % 2 == 0) {
                cout << maxi << endl;
                break;
            }
        
        }

    }
    
    return 0;
} 