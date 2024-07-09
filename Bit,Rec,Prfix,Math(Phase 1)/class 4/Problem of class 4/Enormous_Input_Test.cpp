#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{   
    int n,k; cin >> n >> k;
    int ans = 0;
    int a = 0;
    while(n--)
    {
        cin >> a;
        if (a % k == 0)
        {
            ans++;
        } 
    }
    cout << ans << endl;
    
} 


