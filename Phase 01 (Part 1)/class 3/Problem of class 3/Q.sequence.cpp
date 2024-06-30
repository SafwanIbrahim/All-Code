 /*
  * 
  *   Safwan Ibrahim (c) 2024 ;
  * 
  */

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int ans(int number)
{
    if (number == 1) return 1;
    if (number % 2 == 1)
    {
        number = (number * 3) + 1;
    }
    else
    {
        number = number / 2;
    }
    return ans(number) + 1;
}

int main()
{   
    int n; cin >> n;

    cout << ans(n) << endl; 
    
    
    return 0;
} 


