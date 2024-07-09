#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int n; cin >> n;
    int arr[n+1];
    for (int i = 1; i <= n; i++)
    {
        arr[i] = 0;
    }
    for(int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j+=i)
        {
            arr[j]++;
        }
    }
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += 1LL * i * arr[i];
    }
    cout << sum << endl;
}

int main()
{   
    int t = 1;
    //cin >> t;    
    while(t--) solve(); 
    return 0;
} 


