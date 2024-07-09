#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int t; cin >> t;

    while (t--)
    {
        char s[55],t[55];

        cin >> s >> t;

        int len = max(strlen(s),strlen(t));

        for (int i = 0; i < len; i++)
        {
            if (i < strlen(s))
            {
                cout << s[i];
            }
            if (i < strlen(t))
            {
                cout << t[i];
            }
        }
        cout << endl;

    }
    return 0;
}