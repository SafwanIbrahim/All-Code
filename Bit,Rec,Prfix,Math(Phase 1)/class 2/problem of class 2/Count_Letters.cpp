#include <bits/stdc++.h>
using namespace std;

const int n = 1e7 + 5;
char s[n];
int main()
{   

    cin >> s;

    int len = strlen(s);

    for (int i = 97; i < 123; i++)
    {   
        int count = 0;
        for (int j = 0; j < len; j++)
        {
            if((char)i == s[j])
            {
                count++;
            }
        }
        if (count)
        {
            cout << (char) i << " " << ":" << " " << count << endl;
        }
        
    }

    return 0; 
}