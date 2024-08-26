#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

bool odd(int n) {
    return n % 2;
}

void solve() 
{
    int n; cin >> n;
    int check = n;
    map<int,int>ump;
    for (int i = 1; i <= n; i++) {
        int a; cin >> a;
        ump[a]++; 
    }

    int max_cnt = 0;
    for (auto x : ump) {
        max_cnt = max(x.second,max_cnt);
    }
    if (max_cnt <= n/2) {
        cout << odd(check) << endl;
    }
    else {
        n += odd(check);
        cout << (max_cnt - (n/2)) * 2 + odd(check) << endl;
    }

}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
} 
