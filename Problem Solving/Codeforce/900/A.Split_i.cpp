#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int pass = 0,k,n; cin >> n >> k;
    string s; cin >> s;

    if (k*2 == n) {
        cout << "NO\n";
        return;
    }
    for (int i = 0,j = s.size()-1; i < j; i++,j--) {
        if (pass == k) break;
        if (s[i] == s[j]) pass++;
        else {
            string c1 = "", c2 = ""; 
            while(i < j) {
                c1+= s[i];
                c2+= s[j];
                string c3 = c2;
                reverse(c3.begin(),c3.end());
                if (c3 == c1) {
                    pass++;
                    break;
                }
                else {
                    i++,j--;
                }
            }
        }
    }

    if (pass == k) {
        cout << "YES\n";
    }
    else cout << "NO\n";
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1; cin >> t;
    while(t--) solve();
    return 0;
} 