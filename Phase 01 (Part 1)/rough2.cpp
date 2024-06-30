#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define endl '\n'

ll power(ll a,ll b)
{   
    ll ans = 1;
    for (int i = 1; i <=b ; i++)
    {
        ans *= a;
    }
    return ans;
}
int divisors(int n)
{
    int ans = 0;
    if (sqrt(n) - int(sqrt(n)) == 0) ans++;
    for (int i = 1; i*i < n; i++)
    {   
        cout << "in" << endl;
        if (n % i == 0)
        {
            ans+= 2;
        }
    }
    return ans;
}

void solve()
{   
    cout << divisors(2) << endl;
    cout << 0 % 75243890 << endl;
}

int main()
{   
    int t = 1;
    //cin >> t;
    while(t--)
    {
        solve();
    }
    
    return 0;
} 

