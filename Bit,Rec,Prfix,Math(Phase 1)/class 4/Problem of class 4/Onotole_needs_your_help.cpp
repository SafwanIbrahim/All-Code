#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 5e5 + 5;
int arr[N];

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; 
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = (ans ^ arr[i]);
    }
    cout << ans << endl;
    
    return 0;
} 