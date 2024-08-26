#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    string s; cin >> s;
    int len = s.size();
    int ans1 = 0 , ans2 = 0;

    int check = 0;
    for (int i = s.size()-1 ; i >= 0; i--) {
        if (check == 0) {
            if (s[i] == '0') check++;
            else ans1++;
        }
        else if (check == 1) {
            if (s[i] == '0' or s[i] == '5') {
                break;
            }
            else {
                ans1++;
            }
        }
    }

    check = 0;
    for (int i = s.size()-1; i >= 0; i--) {
        if (check == 0) {
            if (s[i] == '5') check++;
            else ans2++;
        }
        else if (check == 1) {
            if (s[i] == '2' or s[i] == '7') {
                break;
            }
            else {
                ans2++;
            }
        }
    }
    cout << min(ans1,ans2) << endl;
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t; 
    while(t--) solve();
    return 0;
} 