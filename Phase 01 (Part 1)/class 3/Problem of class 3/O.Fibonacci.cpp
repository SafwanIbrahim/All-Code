 /*
  * 
  *   Safwan Ibrahim (c) 2024 ;
  * 
  */

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int fibonacci(int n)
{   
    if (n == 1 || n == 2) return n-1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{   
    int n; cin >> n;
    cout << fibonacci(n) << endl; 
    
    
    return 0;
} 


