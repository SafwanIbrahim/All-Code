#include <bits/stdc++.h>
using namespace std;

int main()
{   
    char s[1000005];

    cin >> s;

    int len = strlen(s);
    
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum+= s[i] - '0';
    }
    cout << sum << endl;
    return 0;
}