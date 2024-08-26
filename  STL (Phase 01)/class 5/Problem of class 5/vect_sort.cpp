#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<int>ml(n);
    for (int i = 0; i < n; i++)
    {   
       cin >> ml[i];
    }
    sort(ml.begin(),ml.end());
    for (int i = 0; i < n; i++)
    {   
       cout << ml[i] << " ";
    }
    cout << endl;
    
    return 0;
} 