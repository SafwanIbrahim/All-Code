#include <iostream>
using namespace std;
int main()
{
    int k,s; 
    cin>> k >> s;

    int n=0;

    for (int i = 0; i <= k ; i++)
    {
        for (int j = 0; j<= k; j++) 
        {
            int z=s-(i+j);
            if (z<=k  && z>=0) n++;
        }
    }
    cout<<n<<"\n";
    return 0;
}