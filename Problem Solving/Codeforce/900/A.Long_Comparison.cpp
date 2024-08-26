#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{   
    string x1,x2;
    int p1,p2; cin >> x1 >> p1 >> x2 >> p2;
    int len_x1 = x1.size(),len_x2 = x2.size();
    if (len_x1 > len_x2) {
        int go = len_x1-len_x2;
        while(go--) x2 += '0';
    }
    else {
        int go = len_x2-len_x1;
        while(go--) x1 += '0';
    }
    len_x1 += p1;
    len_x2 += p2;

    if (len_x1 > len_x2) {
        cout << ">" << endl;
        return;
    }
    else if (len_x1 < len_x2) {
        cout << "<" << endl;
        return;
    }
    else {
        for (int i = 0; i < x1.size(); i++) {
            if (x1[i] > x2[i]) {
                cout << ">" << endl;
                return;
            } 
            else if (x1[i] < x2[i]) {
                cout << "<" << endl;
                return;
            }
        }
        cout << "=" << endl;
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