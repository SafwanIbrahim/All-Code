#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{   
    int t; cin >>t ;

    while(t--)
    {
        int x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >> y2;

        if (x1 > y1)
        {
            if (y2-x1 >= 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            if (x2 - y1 >= 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }

        }
    }
    
    
    return 0;
} 
