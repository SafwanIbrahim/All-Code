#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{   
    ll n; cin >> n;
    ll check = n;
    n--;
    ll ans = n / 2 + 1;
    if (check % 2 == 1) ans *= -1;
    cout << ans << endl;
    
    
    return 0;
} 

