#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b,c;

    cin >> a >> b >> c;

    for (int i = 0 ; i <= c; i+=a)
    {
        for (int j = 0; i+j <= c; j+=b )
        {
            if (i+j == c)
            {
                cout << "Yes";
                return 0;
            }
        }
    }
    cout << "No";

}