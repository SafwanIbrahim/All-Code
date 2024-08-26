#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{   
    map<int,string>mp;
    int n; cin >> n;
    cin.ignore();
    for (int i = 1; i <= n; i++) {
        string name1; 
        getline(cin,name1);
        int j = name1.size() - 4;
        string age1 = name1.substr(j);
        int age = stoi(age1);
        string name = name1.substr(0,j-1);
        mp[-age] = name;
    }
    for (auto x : mp) {
        cout << x.second << endl;
    }
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1; cin >> t;
    while(t--) solve();
    return 0;
} 