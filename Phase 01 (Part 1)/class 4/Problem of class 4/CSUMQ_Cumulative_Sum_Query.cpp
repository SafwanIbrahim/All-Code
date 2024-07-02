#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{   
    int n; cin >> n;
    ll arr[n+1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    } 
    arr[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        arr[i] = arr[i] + arr[i-1];
    }
    int q; cin >> q;
    while(q--)
    {   

        int l,r; cin >> l >> r;
        l++; r++;
        ll sum = arr[r] - arr[l-1];

        cout << sum << endl;
    }
    return 0;
} 


