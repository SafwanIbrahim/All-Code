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
        priority_queue<int>p;
        int n,k; cin >> n >> k;
        p.push(n);
        int ans = 0;
        while(p.top()!= 1) {
            int need = p.top();
            p.pop();
            for (int i = 1; i < k; i++) {
                p.push(1);
                need--;
            }
            ans++;
            p.push(need);
            // if(p.top() == 1) {
            //     break;
            // }
        }
        cout << ans << endl;

    }
    
    return 0;
} 