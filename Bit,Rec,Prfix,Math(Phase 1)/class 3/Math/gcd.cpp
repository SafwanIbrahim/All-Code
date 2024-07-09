#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int a = 1, b = 35;
    int result = gcd(a, b);  // time complexity of gcd = log(min(a,b));
    cout << "gcd test(" << a << "," << b << ") = " << result << endl;

    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

}