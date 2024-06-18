#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;

    while(t--)
    {
        unsigned int n; cin >> n;

        for (int i = 0,j = 31; i < j; i++,j--)
        {
            int first_check = ((n >> j) & 1);
            int last_check = ((n >> i) & 1);

            if (first_check)
            {
                n = ((1 << i) | n);
            }
            else {
                n = (n & ~(1 << i));
            }
            if (last_check)
            {
                n = ((1 << j) | n);
            }
            else {
                n = (n & ~(1 << j));
            }

        }
        cout << n << endl;
    }
}