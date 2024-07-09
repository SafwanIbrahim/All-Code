#include <bits/stdc++.h>
using namespace std;

int main()
{   
    char s[1005];

    cin >> s;

    int len = strlen(s);
    for (int i = 0, j = len-1; i < j; i++,j--)
    {
        if(s[i] != s[j])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}