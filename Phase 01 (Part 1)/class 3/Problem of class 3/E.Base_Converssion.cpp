#include <bits/stdc++.h>
using namespace std;

void binary(int n)
{
    if (n == 0) 
    {
        return;
    }
    int bin = n%2;
    n = n/2;
    binary(n);
    cout << bin;

}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        binary(n);
        cout << endl;
    }
}