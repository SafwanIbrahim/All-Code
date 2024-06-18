#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int t ; cin >> t;

    while (t--)
    {
        unsigned int n ; cin >> n;

        for (int i = 0; i < 32; i++)
        {
            n = n ^ (1 << i);
        }

        cout << n << endl;
    }
    return 0;
}