#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n = 1000006;
    char s[n];

    cin >> s;

    int len = strlen(s);

    for (int i = 0; i < len ; i++)
    {
        if (s[i] == ',')
        {
            s[i] = ' ';
        }
        else 
        {
            int value = s[i];

            if (value < 91)
            {
                value+= 32;
            }
            else 
            {
                value -= 32;
            } 
            s[i] = (char) value; 
        }
    }
    cout << s << endl;

    return 0;
}