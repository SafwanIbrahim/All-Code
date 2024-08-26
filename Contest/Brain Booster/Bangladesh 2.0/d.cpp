#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int n,k; cin >> n >> k;
    string arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    string ans = "0";
    for (int i = 0; i < n-k; i++) {
        string s = "";
        for (int j = i; j <= i+k; j++) {
            s += arr[j];
        }
        //cout << s << endl;
        if (ans.size() < s.size()) {
            ans = s;
        }
        else if (ans.size() == s.size()) {
            ans = max(ans,s);
        }
    }
    cout << ans << endl;
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1; cin >> t;
    while(t--) solve();
    return 0;
} 