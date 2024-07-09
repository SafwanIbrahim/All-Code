#include <bits/stdc++.h>
using namespace std;

int turn_on_kth_bit(int n, int k)
{
    return (n | (1 << k));
}

int turn_off_kth_bit(int n, int k)
{
    return (n & ~(1 << k));
}

int main()
{
    int t ; cin >> t;

    while (t--)
    {
        int n ; cin >> n ;

        for (int i = 0; i < 32 ; i += 2)
        {   
            int first_bit = (n >> i) & 1;
            int second_bit = (n >> (i+1)) & 1;

            if(first_bit)
            {
                n = turn_on_kth_bit(n,i+1);
            }
            else {
                n = turn_off_kth_bit(n,i+1);
            }
            if(second_bit)
            {
                n = turn_on_kth_bit(n,i);
            }
            else {
                n = turn_off_kth_bit(n,i);
            }
        }
        cout << n << endl;
    }
}