#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int t; cin >> t;

    while (t--)
    {
        int n ; cin >> n;

        int arr[n];

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long mult = 0;
        
        for (int i = 0; i < n-1; i++)
        {
            long long mult_tmp = (long long )arr[i] * arr[i+1] ;
            mult = max(mult,mult_tmp);
        }
        cout << mult << endl;
    }
    
    return 0;
}