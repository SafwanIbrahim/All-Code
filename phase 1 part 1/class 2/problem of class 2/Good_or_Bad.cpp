#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int t; cin >> t;

    while (t--)
    {
        char s[100005];

        cin >> s;

        int len = strlen(s);

        int red = 1;
        for (int i = 0; i < len-2 ; i++)
        {
            if (s[i] == '1' && s[i+1] == '0' && s[i+2] == '1')
            {
                cout << "Good" << endl;
                red = 0;
                break;
            }
            else if (s[i] == '0' && s[i+1] == '1' && s[i+2] == '0')
            {
                cout << "Good" << endl;
                red = 0;
                break; 
            }
        }
        if (red)
        {
            cout << "Bad" << endl;
        }

    }
    return 0;
}