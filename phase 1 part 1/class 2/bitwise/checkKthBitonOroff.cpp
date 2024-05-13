#include <bits/stdc++.h>

using namespace std;

int check_kth_bit (int x , int k)
{
    return ( x >> k ) & 1;
}

int main ()
{   
    cout<< check_kth_bit(11,3)<<endl;
    cout<< check_kth_bit(11,2)<<endl;

    return 0;
}