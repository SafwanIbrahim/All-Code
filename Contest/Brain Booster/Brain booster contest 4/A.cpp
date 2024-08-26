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
        string s;
        cin >> s;
        int sum = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i]-'0' > 0 and s[i]-'0' < 10) sum += s[i] - '0';
        }
        cout << sum << endl;
    }
    
    return 0;
} 