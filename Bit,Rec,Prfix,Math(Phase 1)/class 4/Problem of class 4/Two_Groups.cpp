#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll sum1 = 0;
        ll sum2 = 0;
        
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > 0)
            {
                sum1 += abs(arr[i]);
            }
            else
            {
                sum2 += abs(arr[i]);
            }

        }
        cout << abs(sum1 - sum2) << endl;
    }
    
    return 0;
} 