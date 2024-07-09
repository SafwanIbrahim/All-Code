#include <iostream>
using namespace std;
int main()
{
    int s,t; 
    cin>> s >> t;

    int n=0;

    for (int i = 0; i <= s ; i++)
    {
        for (int j = 0; j+i <= s; j++) 
        {
            for (int k = 0; k+j+i <= s ; k++)
            {
                if (i+j+k <= s && i*j*k <= t) n++;
            }
        }
    }
    cout<<n;
    return 0;
}