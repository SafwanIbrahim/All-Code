#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    string s = "",stored = "";
    char letter = 'A';
    for (int i = 1; i <= n; i++) {
        s += letter++;
        s += stored;
        stored = s;
    }

    cout << s;
    
    return 0;
} 