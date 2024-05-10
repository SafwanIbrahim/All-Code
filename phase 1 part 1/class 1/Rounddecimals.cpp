#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x;
    cin>>x;
    int y = (int) x;
    if (x-y >= 0.5) cout<<y+1;
    
    else cout<<y;

    return 0;
}