 /*
  * 
  *   Safwan Ibrahim (c) 2024 ;
  * 
  */

#include <bits/stdc++.h>
using namespace std;
#define ll long long



ll nCr(int n, int r)
{     
    if (n < r or n < 0 or r < 0) return 0;  
    if (n == 0) return 1;
    return nCr(n-1,r) + nCr(n-1,r-1);
}

int main()
{   
    
    ll n,r ; cin >> n >> r;

    cout << nCr(n,r) << endl;
    

    return 0;
} 


 