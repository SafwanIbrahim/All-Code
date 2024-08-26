#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{   
    int t; cin >> t;
    while(t--)
    {
        int x; cin >> x;
        int n = 0;
        for (int i = 30; i >= 0; i--)
        {   
            if ((x >> i) & 1) 
            {   
                n = i;
                break;
            }
        }
        cout << n+1 << endl;
        for (int i = 0; i <= n; i++)
        {
            cout << ((x >> i) & 1) << " ";
        }
        cout << endl;
    }
    return 0;

    
} 