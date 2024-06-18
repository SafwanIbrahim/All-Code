#include <bits/stdc++.h>
using namespace std;
int check_kth_bit (int x , int k)
{
    return (x >> k) & 1;
}
int main()
{   
    int t; cin >> t;

    while (t--)
    {   
        
        int n ; cin >> n;

        int count = 0;

        for (int i = 1; i <= n ; i++)
        {
            for (int j = 0; j < 32; j++)
            {
                if (check_kth_bit(i,j))
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}