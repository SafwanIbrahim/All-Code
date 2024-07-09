#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int a,b,lcm;
    a = 12, b = 24; 
    lcm = (a * b) / gcd(a,b);
    cout << "lcm of ("<<a << "," <<b <<") = " << lcm << endl;
}