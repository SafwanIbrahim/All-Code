#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maximum = 0;
    for (int i = 0; i < n; i++)
    {
        maximum = max(arr[i],maximum);
    }

    int ans = 2;
    int max = 0;

    for (int i = 2; i <= maximum; i++)  
    {       
        int power = 0;
        for (int j = 0 ; j < n; j++)
        {   
            if (arr[j] % i == 0) power++;
        }
        if (power > max)
        {
            max = power;
            ans = i;
        }
    }
    cout << ans << endl;
    
    return 0;
} 