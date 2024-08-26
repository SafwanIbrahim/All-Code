 /*
  * 
  *   Safwan Ibrahim (c) 2024 ;
  *   Don't forget long long;
  * 
  */

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{   
    int t; cin >> t;

    while(t--)
    {
        int x1,x2,x3; cin >> x1 >> x2 >> x3;

        int res = 1000000;

        for (int i = 0; i <= 100; i++)
        {
            int check = abs(x1-i)+abs(x2-i)+abs(x3-i);
            res = min(check,res);
        }
        cout << res << endl;
    }
    
    
    return 0;
} 
  
