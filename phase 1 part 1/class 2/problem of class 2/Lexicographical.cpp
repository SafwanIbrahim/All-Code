#include <bits/stdc++.h>
using namespace std;

int main()
{   
    char x[25],y[25];

    cin >> x >> y;

    int lenx = strlen(x);

    int leny = strlen(y);

    int limit = min(lenx,leny);

    for (int i = 0; i < limit; i++)
    {
        if (x[i] < y[i])
        {
            cout << x;
            return 0;
        }
        else if (x[i] > y[i])
        {
            cout << y;
            return 0;
        }
    }

    if (lenx < leny)
    {
        cout << x;
    }
    else 
    {
        cout << y;
    }

    return 0;
}