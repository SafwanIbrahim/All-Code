#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,k; cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    for (int i = 0; i < n - (k-1); i++)
    {   
        ll sum = 0;
        for (int j = i,l = 1; l <= k; j++,l++)
        {
            sum += arr[j];
        }
        cout << sum << endl;

    }
    
    return 0;
} 