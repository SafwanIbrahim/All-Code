#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int t; cin >> t;

    while(t--)
    {
        int n ; cin >> n;

        int ans_sum = 0;

        int x = 0;

        for (int i = 2; i <= n; i++)
        {   
            int sum = 0;
            for (int j = i; j <= n; j += i )
            {
                sum += j;
            }
            if (sum > ans_sum)
            {
                ans_sum = sum;
                x = i;
            }
        }
        cout << x << endl;
    }
    return 0;
}