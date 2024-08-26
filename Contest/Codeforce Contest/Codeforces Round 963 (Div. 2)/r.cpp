#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    multiset<int>m;
    m.insert(2);
    m.insert(3);
    ll it = *m.rbegin();
    ll min = *m.begin();
    cout << min << endl;
    return 0;
} 