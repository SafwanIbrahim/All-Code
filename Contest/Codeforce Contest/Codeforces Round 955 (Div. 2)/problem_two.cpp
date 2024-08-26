#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{   
    int t; cin >> t;

    while(t--)
    {
        int x,y,k; cin >> x >> y >> k;

        while(k!=0)
        {
            if(x % y != 0)
            {
                int check = min(y-(x%y),k);
                x += check;
                k -= check;
                cout << x << endl;
            }
            while(x % y == 0)
            {
                x = x/y;
                cout << x << endl;
            }
            if (x < y)
            {
                
            }
        }
        cout << x << endl;
    }
    
    return 0;
} 
