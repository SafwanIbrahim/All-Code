#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int t; 
    cin>> t;

    for ( int i = 1; i <=t ; i++)
    {
        long long int n;
        cin >> n;
        long long int sum;
        sum = (n*(n+1)/2);

        for (int i = 1; i <= n; i*=2)
        {
            int d=i*2;
            sum-=d;
        }
        cout<<sum<<endl;
    }
    return 0;
}