#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

     vector<int>v;
    for(int i = 0; i < 3; i++)
    {
        int x; cin >> x;
        v.push_back(x);
    }
    
    for (int i = 0; i < 3; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
} 