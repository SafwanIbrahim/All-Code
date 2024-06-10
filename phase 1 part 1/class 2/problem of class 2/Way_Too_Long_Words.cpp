#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int t; cin >> t;

    while (t--)
    {
        char s[105];

        cin >> s;

        int len = strlen(s);

        if (len <= 10)
        {
            cout << s << endl;
        }
        else 
        {
            cout << s[0] << len-2 << s[len-1] << endl;
        } 

    }
    return 0;
}