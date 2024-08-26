#include<bits/stdc++.h>
using namespace std;

// O(nlogn)
int32_t main() 
{
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (auto x: v) {
        cout << x << '\n';
    }
    cout << *(v.end());
    return 0;
}