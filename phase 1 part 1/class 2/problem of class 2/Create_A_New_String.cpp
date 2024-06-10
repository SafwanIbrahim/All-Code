#include <bits/stdc++.h>
using namespace std;

int main()
{   
    char s[100000],t[100000];

    cin >> s >> t;

    int length_of_s = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        length_of_s++;
    }

    int length_of_t = 0;

    for (int i = 0; t[i] != '\0'; i++)
    {
        length_of_t++;
    }
    cout << length_of_s << " " << length_of_t << endl;

    cout << s << " " << t << endl;

    return 0;
}