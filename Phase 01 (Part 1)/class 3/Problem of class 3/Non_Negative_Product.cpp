#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int number_of_negetive = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0) 
        {
            cout << 0 << endl;
            return;
        }
        if (arr[i] < 0) number_of_negetive++;
    }
    if (number_of_negetive % 2 == 1) ans++;
    cout << ans << endl;
}

int main()
{   
    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    
    return 0;
} 

