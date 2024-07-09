#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

ll sum(ll s)
{
    return (s * (s+1))/ 2;
}

void solve()
{
    int n; cin >> n;
    int arr[n+1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    arr[n] = 0;
    ll ans = 0;
    int subarray = 0;
    for (int i = 0; i <= n; i++)
    {
        if(arr[i] == 0)
        {
            ans += sum(subarray);
            subarray = 0;
        }
        else
        {
            subarray++;
        }        
    }
    cout << ans << endl;
}

int main()
{   
    int t = 1;
    cin >> t;    
    while(t--) solve(); 
    return 0;
} 

