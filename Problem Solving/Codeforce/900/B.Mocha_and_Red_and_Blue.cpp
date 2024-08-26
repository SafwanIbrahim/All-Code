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
        string s; cin >> s;
        s += 'R';
        for (int i = 0; i <= n; i++) {
            if (s[i] == 'R' or s[i] == 'B') {
                int a = i+1;
                while(a < n and s[a] == '?') {
                    if (s[a-1] == 'R') s[a] = 'B';
                    else s[a] = 'R';
                    a++;
                }
            }
        }
        for (int i = 0; i <= n; i++) {
            if (s[i] == 'R' or s[i] == 'B') {
                int a = i-1;
                while(a >= 0 and s[a] == '?') {
                    if (s[a+1] == 'R') s[a] = 'B';
                    else s[a] = 'R';
                    a--;
                }
                break;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << s[i];
        }
        cout << endl;
        

    }
    
    return 0;
} 