#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int n; cin >> n;
    int multi = 1;
    int cnt = 0;
    int duplicate = n;
    while(duplicate > 0)
    {
        if (duplicate % 10 != 0) cnt++;
        duplicate = duplicate / 10;
    }
    cout << cnt << endl;
    while(n > 0)
    {   
        if (n % 10 != 0) 
        {
            cout << n % 10 * multi << " ";
        }        
        n = n / 10;
        multi *= 10;
    }
    cout << endl;
}

int main()
{   

    int t; cin >> t;
    while(t--)
    {
        solve();
    }
    
    return 0;
} 

