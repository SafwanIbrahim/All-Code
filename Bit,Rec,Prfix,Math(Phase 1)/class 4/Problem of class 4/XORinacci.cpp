#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void go()
{
    int a,b,n; cin >> a >> b >> n;
    n = n%3;

    if (n == 0) cout << a << endl;
    else if (n == 1) cout << b << endl;
    else if (n == 2) cout << (a ^ b) << endl;
}

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) go();


    return 0;
} 