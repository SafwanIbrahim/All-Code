#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    if (y >= x) 
    {
        cout << y-x+1;
    }
    else
    {
        cout << 0;
    }

    return 0;
}