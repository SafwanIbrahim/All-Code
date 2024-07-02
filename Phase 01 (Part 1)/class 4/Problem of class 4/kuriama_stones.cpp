#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int S = 1e7;

ll type_1[S],type_2[S];

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    ll arr[n+1];
    
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++)
    {
        type_1[i] = type_1[i-1] + arr[i];
    }

    int nn = n+1;
    sort(arr+1,arr+nn);

    for (int i = 1; i <= n; i++)
    {
        type_2[i] = type_2[i-1] + arr[i];
    }

    int m; cin >> m;
    int type,l,r;

    while(m--)
    {
        cin >> type >> l >> r;
        if (type == 1)
        {
            cout << type_1[r] - type_1[l-1] << endl;
        }
        else
        {
            cout << type_2[r] - type_2[l-1] << endl;
        }

    }


} 