#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{   
    ll n,k; cin >> n >> k;

    if (k > (n-1)/2+1)
    {
        k = (k -((n-1)/2+1));
        cout << 2*k << endl;
        return 0;
    }
    cout << 2 * k - 1 << endl;
        
    return 0;
} 

