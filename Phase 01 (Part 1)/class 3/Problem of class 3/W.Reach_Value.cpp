 /*
  * 
  *   Safwan Ibrahim (c) 2024 ;
  * 
  */

#include <bits/stdc++.h>
using namespace std;
#define ll long long


bool check(ll number)
{   
    if (number == 1) 
    {
        return true;
    }
    if (number % 10 == 0) // if it doesn't return true then check next one;
    {
        if (check(number/10))
        {
            return true;
        }
    }
    if (number % 20 == 0) // if it doesn't return true also then it will return false;
    {
        if (check(number/20))
        {
            return true;
        }
    }
    return false;
}

int main()
{   
    int t; cin >> t;

    while(t--)
    {
        ll n ;cin >> n;

        if (check(n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }       
    
    
    return 0;
} 