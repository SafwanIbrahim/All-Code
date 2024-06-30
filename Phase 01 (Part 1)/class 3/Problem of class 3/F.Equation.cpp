 /*
  * 
  *   Safwan Ibrahim (c) 2024 ;
  * 
  */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll power(int x, int n)
{   
    ll ans = 1;
    while(n--)
    {
        ans *= x;
    }
    return ans;
}

ll sum(int x, int n)
{   
    ll s = 0;
    for (int i = 2; i <= n; i += 2)
    {
        s += power(x,i);
    }
    return s;
}
int main()
{   
    int x,n; cin >> x >> n;
    cout << sum(x,n) << endl;
    
    return 0;
} 


