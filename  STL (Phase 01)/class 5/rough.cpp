#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n ; cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " x " << n << " = " << n*i << endl;
    }

    return 0;
}