#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int x; cin >> x;
    int a,b; cin >> a >> b;

    v.erase(v.begin()+(--x));
    v.erase(v.begin()+(--a),v.begin()+(--b));
    cout << v.size() << endl;
    
    for (auto i : v) {
        cout << i << " ";
    }
    cout << endl;


    return 0;
} 