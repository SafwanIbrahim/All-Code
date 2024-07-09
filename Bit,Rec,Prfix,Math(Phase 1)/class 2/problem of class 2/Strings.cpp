#include <bits/stdc++.h>
using namespace std;

int main()
{   
    char a[15],b[15];

    cin >> a >> b;

    cout << strlen(a) << " " << strlen(b) << endl;

    cout << a << b << endl;

    char tmp = a[0];
    a[0] = b[0];
    b[0] = tmp;

    cout << a << " " << b;

    return 0;
}