#include <iostream>
using namespace std;

int main()
{   
    int a,b,c;

    cin >> a >> b >> c;

    for (int i = c ; i <= b ;i+=c)
    {   
        if (i >= a && i <=b) 
        {
            cout << i ;
            return 0;
        }
    }
    cout << -1;
    return 0;
}