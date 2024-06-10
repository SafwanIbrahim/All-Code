#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n; cin >> n;

    int count_bit = 0;
    
    for (int i = 0; i < 32; i++)
    {
        if ((n >> i) & 1)
        {
            count_bit++;
        }
    }
    cout << ((1 << count_bit)-1) << endl;
    
    return 0;
}