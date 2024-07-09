#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    double num = 103.141592653;
    cout << setprecision(3) << num << '\n'; // 103
    cout << setprecision(5) << num << '\n'; // 103.14
    cout << setprecision(10) << num << '\n'; // 103.1415927 (notice the rounding)
    cout << fixed << setprecision(7) << num << '\n' << endl; // rounding again

    num = 203.1415926;
    cout << fixed << setprecision(3) << num << '\n'; // 103.142
    cout << fixed << setprecision(5) << num << '\n'; // 103.14159
    cout << fixed << setprecision(10) << num << '\n'; // 103.1415926000 (notice the trailing zeros)

    cout << setprecision(15) << num << '\n'; // 103.1415926 (no trailing zeros)
} 