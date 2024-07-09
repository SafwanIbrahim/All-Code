#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;

    while (t--)
    {
        unsigned int n,k; cin >> n >> k;

        cout << (n | (1 << k)) << endl;
    }
    return 0;
} 