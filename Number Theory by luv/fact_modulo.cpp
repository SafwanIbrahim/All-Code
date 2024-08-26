#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int m = 47;
    ll fact = 1;
    for (int i = 1; i <= 21; i++) {
        fact *= i;
        fact %= m;
    }
    cout << fact << endl;
    return 0;
} 