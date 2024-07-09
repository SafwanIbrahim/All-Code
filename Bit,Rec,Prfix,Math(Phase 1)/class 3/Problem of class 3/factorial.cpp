 /*
  * 
  *   Safwan Ibrahim (c) 2024 ;
  * 
  */

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll fact (int n)
{   
    if (n == 1 or n == 0) 
    {
        return 1;
    } 
    return n * fact(n-1);
}

int main()
{   
    int n; cin >> n;  
    cout << fact(n) << endl;
    
    
    return 0;
} 


