#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{   
    int x = 18, y = 3;     
    while(x % y == 0)
    {
        x = x/y;
    }
    cout << x;
    
    
    return 0;
} 

