#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 2e5+9;
int n,arr[N];
char s[N];

void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
    }
    
    vector<bool>done(n+5,false);
    vector<int> ans(n+5,-1);
    for (int i = 1; i <= n; i++) {
        int cnt = 0;
        int indx = i;
        int a = arr[i];
        if (done[a]) {
            continue;
        }
        while(!done[a]) {
            done[a] = true;
            if (s[indx] == '0') {
                cnt++;
            }
            indx = a;
            a = arr[a];
        }
        while(ans[a] == -1) {
            ans[a] = cnt;
            a = arr[a];
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << ans[arr[i]] << " ";
    }
    cout << endl;
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1; cin >> t;
    while(t--) solve();
    return 0;
} 