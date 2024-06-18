#include <iostream>

using namespace std;

int main()
{   
    long double a,b;

    cin >> a >> b;

    long double r =100-((100/a)*b);

    printf("%.20Lf",r);
    return 0;
}