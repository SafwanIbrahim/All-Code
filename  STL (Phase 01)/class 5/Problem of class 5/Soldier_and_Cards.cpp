#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    queue<int>p1,p2;
    int n; cin >> n;

    int k1; cin >> k1;
    for (int j = 0; j < k1; j++) {
        int number; cin >> number;
        p1.push(number);
    }

    int k2; cin >> k2;
    for (int b = 0; b < k2; b++) {
        int number; cin >> number;
        p2.push(number);
    }

    int ans = 0;
    int limit = 1e7;

    while(!p1.empty() and !p2.empty()) {
        if (ans > limit) {
            cout << -1 << endl;
            return 0;
        }   
        if (p1.front() > p2.front()) {
            int big = p1.front();
            int small = p2.front();
            p1.pop();
            p2.pop();
            p1.push(small);
            p1.push(big);
        }
        else {
            int big = p2.front();
            int small = p1.front();
            p2.pop();
            p1.pop();
            p2.push(small);
            p2.push(big);
        }
        ans++;
    }
    cout << ans << " ";
    if (p1.empty()) cout << 2 << endl;
    else cout << 1 << endl;
    return 0;
}