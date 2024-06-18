#include <bits/stdc++.h>
using namespace std;

int main()
{   
    // int has 32 bits  // long long has 64 bits

    long long x = ((long long) 5 << 60) ; // 5 is integer by defualt so it would be 32 bit // we have to cast it to long long 

    //method 2 

    // long long x = (5LL << 60)
    
    long long y = (5<<60);  // it will give warning
    
    cout << x <<'\n';
    cout << y <<'\n';




    return 0;
}