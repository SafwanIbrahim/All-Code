#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 5 ,b = 7;

    int res1=(a ^ b); // xor

    int res2= (a & b); // and 

    int res3 = (a | b); // or

    int res4 = (~10);  // not

    int res5 = (5 << 1); // leftshift

    int res6 = (1 << 5);  // 5 times leftshift means 1*(2 to the power 5)

    int res7 = (10 >> 1); // right shift means 10*(2 to the power minus 1)  

    int res8 = (11 >> 2); // right shift means 11*(2 to the power minus 2) floor division means 11 //(2 to the power 4)

    int res9 = (1 << 31);

    cout << res1 <<'\n'; 
    cout << res2 <<'\n'; 
    cout << res3 <<'\n'; 
    cout << res4 <<'\n'; 
    cout << res5 <<'\n'; 
    cout << res6 <<'\n'; 
    cout << res7 <<'\n'; 
    cout << res8 <<'\n'; 
    cout << res9 <<'\n'; 

    return 0;

}