#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;

    if (x==y) cout<<x+y;
    else cout<<max(x,y)+max(x,y)-1;
}