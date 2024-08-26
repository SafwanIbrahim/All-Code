#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    cin.ignore();
    while(t--) {
        string s; 
        getline(cin,s);
        stringstream ss(s);
        string a;
        while(ss >> a) {
            reverse(a.begin(),a.end());
            cout << a << " ";
        }
        cout << endl;

    }
    
    return 0;
}  