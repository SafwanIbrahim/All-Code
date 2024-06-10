#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n = 1e6+5;
    char s[n];

    cin.getline(s,n);

    for (int i = 0; s[i] !='\\'; i++ )
    {
        cout << s[i];
    }

    return 0;
}