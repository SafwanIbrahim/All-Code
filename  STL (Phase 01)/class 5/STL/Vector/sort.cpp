#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int>v({4,3,6,7,1});

    sort(v.begin(),v.end());

    for(auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }

    cout << endl;

    sort(v.rbegin(),v.rend());

    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }

    
    return 0;
} 