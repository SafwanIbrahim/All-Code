#include <bits/stdc++.h>
using namespace std;

int main()
{   
    double a = 19;
    int a1 = (int) a;
    int b = 3;

    cout << round(a/b) << endl;
    cout << floor(a/b) << endl;
    cout << ceil(a/b) << endl;
    cout << std::gcd(12,18);

    // ceil wihout double :

    cout << (a1 - 1) / b + 1 << endl;
    return 0;
}