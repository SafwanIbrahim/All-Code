#include <iostream>
#include <cmath>
using namespace std;
int main ()
{   
    int a,b,c;

    cin >> a >> b >> c;

    if ((a*a)+(b*b)<c*c) cout << "Yes";
    else cout << "No";

    return 0;
}